#include "ChildThreadSerialPort.h"

ChildThreadSerialPort::ChildThreadSerialPort(int currentChannel, QSerialPort* sendPort, QObject* parent)
{
	thread = new QThread;
	port = new QSerialPort;
	port = sendPort;
	port->moveToThread(thread);

	this->moveToThread(thread);
	this->currentChannel = currentChannel;
	thread->start();
	connect(thread, &QThread::started, this, &ChildThreadSerialPort::working);
}

void ChildThreadSerialPort::working()
{
	if (!port->open(QIODevice::ReadWrite))
	{
		//��Ҫ���ش�����Ϣ
		//QMessageBox::about(NULL, "��ʾ", "�޷���" + QString::number(channel) + "�Ĵ��ڣ�\n����������������ʹ�ô˴���");
		//qDebug() << "error";
		emit senderror(currentChannel, 0, "");
		return;
	}
	else
	{
		emit senderror(currentChannel, 1, port->portName());
		connect(port, &QSerialPort::readyRead, this, &ChildThreadSerialPort::portReadyRead);
	}

}
void ChildThreadSerialPort::portReadyRead()
{
	QByteArray buffer = port->readAll();
	if (buffer.endsWith("\r\n"))
	{
		//��ʽת��
		QString recv = QString::fromLocal8Bit(buffer);
		//recv = QString::number(currentChannel) + recv;
		emit sendChannel(recv, currentChannel, currentCount);
		//������ʾ
		currentCount++;
		buffer.clear();
	}
}
void ChildThreadSerialPort::dealclose(int channel, int mode)
{
	if (mode == 1)
	{
		port->close();
		thread->quit();
		emit senderror(currentChannel, 2, "");
	}
	else
	{
		if (channel == currentChannel)
		{
			port->close();
			thread->quit();
			emit senderror(currentChannel, 3, "");
		}
		else
		{
			if (port->isOpen())
			{
				emit senderror(currentChannel, 1, port->portName());
			}
		}
	}
}
void ChildThreadSerialPort::dealSendData(int channel, QString data)
{
	if (channel == currentChannel)
	{
		port->write(data.toLocal8Bit());
		emit sendSucces();
	}
}
void ChildThreadSerialPort::timeout()
{
	QString str = "";
	str = QString::number(currentCount);
	emit sendChannel(str, currentChannel, currentCount);
	currentCount++;
	QThread::msleep(100);
}

void ChildThreadSerialPort::dealClear()
{
	currentCount = 0;
}

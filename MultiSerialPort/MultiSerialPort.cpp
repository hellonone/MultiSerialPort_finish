#include "MultiSerialPort.h"
#include "qmessagebox.h"
#include "qserialportinfo.h"

MultiSerialPort::MultiSerialPort(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowIcon((QIcon)"myapp.ico");
	setWindowTitle("多路串口调试V1.0");
	//QTableWidgetItem* item;
	//item = new QTableWidgetItem("13");
	//ui.tableWidget->insertColumn(2);
	//ui.tableWidget->setHorizontalHeaderItem(2, item);
	setTable();
	refreshOnclicked();
	
}

void MultiSerialPort::openOnclicked()
{
	int channel = ui.comboBox_Channel->currentIndex();
	if (state[channel] != 1)
	{
		state[channel] = 1;
		QSerialPort* currentSerial = new QSerialPort;
		QString str = ui.comboBox->currentText();
		str = str.left(str.indexOf("->"));
		//设置串口名字
		currentSerial->setPortName(str);
		//设置波特率
		currentSerial->setBaudRate(ui.comboBox_Baud->currentText().toUInt());
		//设置数据位
		switch (ui.comboBox_Date->currentIndex())
		{
		case 0:
			currentSerial->setDataBits(QSerialPort::Data8); break;
		case 1:
			currentSerial->setDataBits(QSerialPort::Data7); break;
		case 2:
			currentSerial->setDataBits(QSerialPort::Data6); break;
		case 3:
			currentSerial->setDataBits(QSerialPort::Data5); break;
		default:break;
		}
		//设置停止位
		switch (ui.comboBox_Stop->currentIndex())
		{
		case 0:currentSerial->setStopBits(QSerialPort::OneStop); break;
		case 1:currentSerial->setStopBits(QSerialPort::TwoStop); break;
		case 2:currentSerial->setStopBits(QSerialPort::OneAndHalfStop); break;
		default:break;
		}
		//设置流控制
		currentSerial->setFlowControl(QSerialPort::NoFlowControl);
		//设置奇偶校验
		switch (ui.comboBox_Parity->currentIndex())
		{
		case 0:currentSerial->setParity(QSerialPort::NoParity); break;
		case 1:currentSerial->setParity(QSerialPort::OddParity); break;
		case 2:currentSerial->setParity(QSerialPort::EvenParity); break;
		default:break;
		}

		child[channel] = new ChildThreadSerialPort(channel, currentSerial);
		//连接信号和槽
		connect(child[channel], &ChildThreadSerialPort::sendChannel, this, &MultiSerialPort::dealChannel);
		connect(child[channel], &ChildThreadSerialPort::senderror, this, &MultiSerialPort::dealError);
		connect(this, &MultiSerialPort::clearRecieve, child[channel], &ChildThreadSerialPort::dealClear);
		connect(this, &MultiSerialPort::closeCurrent, child[channel], &ChildThreadSerialPort::dealclose);
		connect(this, &MultiSerialPort::sendData, child[channel], &ChildThreadSerialPort::dealSendData);
		connect(child[channel], &ChildThreadSerialPort::sendSucces, this, &MultiSerialPort::dealSendSucces);
	}
	else
	{
		QMessageBox::information(this, "警告", "该通道已经连接串口", QMessageBox::Ok);
	}
}

void MultiSerialPort::refreshOnclicked()
{

	ui.comboBox->clear();

	foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts())
	{
		ui.comboBox->addItem(info.portName() + "->" + info.description());
	}


}

void MultiSerialPort::dealChannel(QString str, int channel, int count)
{
	QTableWidgetItem* item;
	item = new QTableWidgetItem("");
	int row = count;
	if (ui.tableWidget->rowCount() <= row)
	{
		ui.tableWidget->insertRow(row);
	}
	str = str.left(str.indexOf("\r\n"));
	item->setText(str);
	ui.tableWidget->setItem(row, channel, item);
	ui.tableWidget->setCurrentCell(row, channel);
	ui.label_RecieveCount->setText("Recieve：" + QString::number(++recieveCount));
}

void MultiSerialPort::clearRecieveOnclicked()
{

	emit clearRecieve();
	ui.tableWidget->clearContents();
	recieveCount = 0;
	ui.label_RecieveCount->setText("Recieve：0");
}


void MultiSerialPort::dealError(int channel, int state, QString str)
{
	if (state == 1)
	{
		if (ui.textEdit_State->toPlainText().indexOf("未连接下位机") >= 0)
		{
			ui.textEdit_State->clear();
		}
		portstate[channel] = 1;
		ui.textEdit_State->insertPlainText(str + "连接到->通道" + QString::number(channel + 1) + "\r\n");
	}
	else if (state == 0)
	{
		this->state[channel] = 0;
		QMessageBox::warning(this, "错误", "串口打开失败\n可能是该串口已经被占用", QMessageBox::Ok);
	}
	else if (state == 2)
	{
		this->state[channel] = 0;
		portstate[channel] = 0;
		ui.textEdit_State->setText("未连接下位机");
	}
	else if (state == 3)
	{
		this->state[channel] = 0;
		portstate[channel] = 0;
	}
}

void MultiSerialPort::showCurrentText()
{
	ui.lineEdit_currentText->setText(ui.tableWidget->currentItem()->text());
}

void MultiSerialPort::closeOnclicked()
{
	int currentChannel = ui.comboBox_Channel->currentIndex();
	emit closeCurrent(currentChannel, 0);
	ui.textEdit_State->clear();
}

void MultiSerialPort::closeAllOnclicked()
{
	emit closeCurrent(0, 1);
}

void MultiSerialPort::addChannelOnclicked()
{
	ui.comboBox_Channel->addItem("通道" + QString::number(ui.comboBox_Channel->count() + 1));
	ui.comboBox_Channel->setCurrentIndex(ui.comboBox_Channel->count() - 1);
	setTable();
}

void MultiSerialPort::editChannelOnclicked()
{
	QString temp = ui.comboBox_Channel->currentText();
	temp = temp.left(temp.indexOf("("));
	ui.comboBox_Channel->setItemText(ui.comboBox_Channel->currentIndex(), temp + "(" + ui.lineEdit->text() + ")");
	setTable();
}

void MultiSerialPort::deleteChannelOnclicked()
{
	if (QMessageBox::warning(this, "注意", "删除通道会关闭所有串口", QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Ok)
	{
		int currentChannel = ui.comboBox_Channel->currentIndex();
		emit closeCurrent(0, 1);
		ui.comboBox_Channel->removeItem(currentChannel);
		ui.tableWidget->removeColumn(currentChannel);
		setTable();
	}
	else
	{
		return;
	}
}

void MultiSerialPort::sendOnclicked()
{
	emit sendData(ui.comboBox_Channel->currentIndex(), ui.textEdit->toPlainText() + "\r\n");
}

void MultiSerialPort::dealSendSucces()
{
	ui.label_SendCount->setText("Send：" + QString::number(++sendCount));
}

void MultiSerialPort::clearSendOnclicked()
{
	ui.textEdit->clear();
	sendCount = 0;
	ui.label_SendCount->setText("Send：0");
}

void MultiSerialPort::channelChanged()
{
	ui.label_ChannleTips->setText("当前选中的的通道为:" + ui.comboBox_Channel->currentText());
}

void MultiSerialPort::setTable()
{
	QTableWidgetItem* item;

	for (int i = 0; i < ui.comboBox_Channel->count(); i++)
	{
		item = new QTableWidgetItem(ui.comboBox_Channel->itemText(i));
		if (ui.tableWidget->columnCount() <= i)
		{
			ui.tableWidget->insertColumn(i);
		}
		ui.tableWidget->setHorizontalHeaderItem(i, item);
	}
}
void MultiSerialPort::actionHelpOnclicked()
{
	QMessageBox::information(this,"提示","本程序是一个多路串口调试工具\n支持多路串口(理论上支持500个串口\n不过可能电脑CPU会燃烧)",QMessageBox::Ok);
}

void MultiSerialPort::actionAboutOnclicked()
{
	QMessageBox::information(this, "关于", "V1.0版本\nBy-->hellonone", QMessageBox::Ok);
}

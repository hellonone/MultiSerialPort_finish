#pragma once
#pragma execution_character_set("utf-8") 
#include"qobject.h"
#include "qthread.h"
#include "qtimer.h"
#include "qserialport.h"

class ChildThreadSerialPort : public QObject
{
	Q_OBJECT
public:
	ChildThreadSerialPort( int currentChannel, QSerialPort* sendPort, QObject* parent = Q_NULLPTR);

signals:
	void sendChannel(QString str, int channel,int count);
	void senderror(int channel,int state,QString str);
	void sendSucces();
public slots:
	void working();
	void dealClear();
	void timeout();
	void portReadyRead();
	void dealclose(int channel,int mode);
	void dealSendData(int channel,QString data);
	//void dealParamatr();
private:
	int currentChannel;
	QSerialPort* port;
	QThread* thread;
	int currentCount = 0;
};


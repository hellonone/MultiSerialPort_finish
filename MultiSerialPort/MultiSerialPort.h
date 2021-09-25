#pragma once
#pragma execution_character_set("utf-8") 
#include <QtWidgets/QMainWindow>
#include "ui_MultiSerialPort.h"
#include "ChildThreadSerialPort.h"


class MultiSerialPort : public QMainWindow
{
	Q_OBJECT

signals:
	void closeCurrent(int channel, int mode = 0);
	void clearRecieve();
	void sendData(int channel,QString data);

public:
	MultiSerialPort(QWidget* parent = Q_NULLPTR);
public slots:
	void dealChannel(QString str,int channel, int count);
	void clearRecieveOnclicked();
	void openOnclicked();
	void refreshOnclicked();
	void dealError(int channel, int state, QString str);
	void showCurrentText();
	void closeOnclicked();
	void closeAllOnclicked();
	void addChannelOnclicked();
	void editChannelOnclicked();
	void deleteChannelOnclicked();
	void sendOnclicked();
	void dealSendSucces();
	void clearSendOnclicked();
	void channelChanged();
	void actionHelpOnclicked();
	void actionAboutOnclicked();

private:
	Ui::MultiSerialPortClass ui;
	ChildThreadSerialPort* child[500];
	int portstate[500];
	int state[500];
	int sendCount = 0;
	int recieveCount = 0;

	void setTable();
};

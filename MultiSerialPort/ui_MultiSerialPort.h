/********************************************************************************
** Form generated from reading UI file 'MultiSerialPortDgeHYf.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MULTISERIALPORTDGEHYF_H
#define MULTISERIALPORTDGEHYF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiSerialPortClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_currentText;
    QPushButton *pushButton_clearRecieve;
    QFrame *frame_7;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_Refresh;
    QComboBox *comboBox_Parity;
    QComboBox *comboBox_Date;
    QLabel *label_Baud;
    QComboBox *comboBox;
    QComboBox *comboBox_Baud;
    QLabel *label_Data;
    QLabel *label_Stop;
    QLabel *label_Parity;
    QComboBox *comboBox_Stop;
    QLabel *label_Select;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_addChannel;
    QTextEdit *textEdit_State;
    QPushButton *pushButton_editChannel;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_deleteChannel;
    QComboBox *comboBox_Channel;
    QLabel *label_PortOpen_2;
    QPushButton *pushButton_Open;
    QPushButton *pushButton_Close;
    QLabel *label_PortOpen;
    QPushButton *pushButton_closeAll;
    QSpacerItem *verticalSpacer;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_ChannleTips;
    QLabel *label_SendCount;
    QLabel *label_RecieveCount;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_ClearSend;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MultiSerialPortClass)
    {
        if (MultiSerialPortClass->objectName().isEmpty())
            MultiSerialPortClass->setObjectName(QString::fromUtf8("MultiSerialPortClass"));
        MultiSerialPortClass->resize(764, 662);
        centralWidget = new QWidget(MultiSerialPortClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(491, 481));
        frame->setFrameShape(QFrame::Box);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMaximumSize(QSize(99999, 50));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_currentText = new QLineEdit(frame_6);
        lineEdit_currentText->setObjectName(QString::fromUtf8("lineEdit_currentText"));
        lineEdit_currentText->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_currentText);

        pushButton_clearRecieve = new QPushButton(frame_6);
        pushButton_clearRecieve->setObjectName(QString::fromUtf8("pushButton_clearRecieve"));
        pushButton_clearRecieve->setMinimumSize(QSize(0, 0));
        pushButton_clearRecieve->setMaximumSize(QSize(99999, 99999));

        horizontalLayout_3->addWidget(pushButton_clearRecieve);


        verticalLayout->addWidget(frame_6);


        gridLayout_3->addWidget(frame, 0, 0, 3, 1);

        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(249, 184));
        frame_7->setMaximumSize(QSize(249, 184));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_7);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_Refresh = new QPushButton(frame_7);
        pushButton_Refresh->setObjectName(QString::fromUtf8("pushButton_Refresh"));
        pushButton_Refresh->setMinimumSize(QSize(75, 24));
        pushButton_Refresh->setMaximumSize(QSize(75, 24));

        gridLayout_2->addWidget(pushButton_Refresh, 0, 1, 1, 1);

        comboBox_Parity = new QComboBox(frame_7);
        comboBox_Parity->addItem(QString());
        comboBox_Parity->addItem(QString());
        comboBox_Parity->addItem(QString());
        comboBox_Parity->setObjectName(QString::fromUtf8("comboBox_Parity"));
        comboBox_Parity->setMinimumSize(QSize(75, 22));
        comboBox_Parity->setMaximumSize(QSize(75, 22));

        gridLayout_2->addWidget(comboBox_Parity, 6, 1, 1, 1);

        comboBox_Date = new QComboBox(frame_7);
        comboBox_Date->addItem(QString());
        comboBox_Date->addItem(QString());
        comboBox_Date->addItem(QString());
        comboBox_Date->addItem(QString());
        comboBox_Date->setObjectName(QString::fromUtf8("comboBox_Date"));
        comboBox_Date->setMinimumSize(QSize(75, 22));
        comboBox_Date->setMaximumSize(QSize(75, 22));

        gridLayout_2->addWidget(comboBox_Date, 5, 1, 1, 1);

        label_Baud = new QLabel(frame_7);
        label_Baud->setObjectName(QString::fromUtf8("label_Baud"));
        label_Baud->setMinimumSize(QSize(142, 22));
        label_Baud->setMaximumSize(QSize(142, 22));

        gridLayout_2->addWidget(label_Baud, 3, 0, 1, 1);

        comboBox = new QComboBox(frame_7);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(229, 22));
        comboBox->setMaximumSize(QSize(229, 22));

        gridLayout_2->addWidget(comboBox, 2, 0, 1, 2);

        comboBox_Baud = new QComboBox(frame_7);
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->addItem(QString());
        comboBox_Baud->setObjectName(QString::fromUtf8("comboBox_Baud"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_Baud->sizePolicy().hasHeightForWidth());
        comboBox_Baud->setSizePolicy(sizePolicy);
        comboBox_Baud->setMinimumSize(QSize(75, 22));
        comboBox_Baud->setMaximumSize(QSize(75, 22));

        gridLayout_2->addWidget(comboBox_Baud, 3, 1, 1, 1);

        label_Data = new QLabel(frame_7);
        label_Data->setObjectName(QString::fromUtf8("label_Data"));
        label_Data->setMinimumSize(QSize(142, 22));
        label_Data->setMaximumSize(QSize(142, 22));

        gridLayout_2->addWidget(label_Data, 5, 0, 1, 1);

        label_Stop = new QLabel(frame_7);
        label_Stop->setObjectName(QString::fromUtf8("label_Stop"));
        label_Stop->setMinimumSize(QSize(142, 22));
        label_Stop->setMaximumSize(QSize(142, 22));

        gridLayout_2->addWidget(label_Stop, 4, 0, 1, 1);

        label_Parity = new QLabel(frame_7);
        label_Parity->setObjectName(QString::fromUtf8("label_Parity"));
        label_Parity->setMinimumSize(QSize(142, 22));
        label_Parity->setMaximumSize(QSize(142, 22));

        gridLayout_2->addWidget(label_Parity, 6, 0, 1, 1);

        comboBox_Stop = new QComboBox(frame_7);
        comboBox_Stop->addItem(QString());
        comboBox_Stop->addItem(QString());
        comboBox_Stop->addItem(QString());
        comboBox_Stop->setObjectName(QString::fromUtf8("comboBox_Stop"));
        comboBox_Stop->setMinimumSize(QSize(75, 22));
        comboBox_Stop->setMaximumSize(QSize(75, 22));

        gridLayout_2->addWidget(comboBox_Stop, 4, 1, 1, 1);

        label_Select = new QLabel(frame_7);
        label_Select->setObjectName(QString::fromUtf8("label_Select"));
        label_Select->setMinimumSize(QSize(0, 0));
        label_Select->setMaximumSize(QSize(142999, 999999));

        gridLayout_2->addWidget(label_Select, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_7, 0, 1, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(249, 271));
        frame_2->setMaximumSize(QSize(249, 271));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_addChannel = new QPushButton(frame_2);
        pushButton_addChannel->setObjectName(QString::fromUtf8("pushButton_addChannel"));

        gridLayout->addWidget(pushButton_addChannel, 0, 2, 1, 1);

        textEdit_State = new QTextEdit(frame_2);
        textEdit_State->setObjectName(QString::fromUtf8("textEdit_State"));
        sizePolicy.setHeightForWidth(textEdit_State->sizePolicy().hasHeightForWidth());
        textEdit_State->setSizePolicy(sizePolicy);
        textEdit_State->setMinimumSize(QSize(0, 0));
        textEdit_State->setMaximumSize(QSize(99999, 99999));
        textEdit_State->setStyleSheet(QString::fromUtf8("QTextEdit{color:rgb(255,0,0)}"));
        textEdit_State->setReadOnly(true);

        gridLayout->addWidget(textEdit_State, 7, 0, 1, 3);

        pushButton_editChannel = new QPushButton(frame_2);
        pushButton_editChannel->setObjectName(QString::fromUtf8("pushButton_editChannel"));

        gridLayout->addWidget(pushButton_editChannel, 2, 2, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(142, 16));
        label->setMaximumSize(QSize(142, 16));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 2);

        pushButton_deleteChannel = new QPushButton(frame_2);
        pushButton_deleteChannel->setObjectName(QString::fromUtf8("pushButton_deleteChannel"));

        gridLayout->addWidget(pushButton_deleteChannel, 1, 2, 1, 1);

        comboBox_Channel = new QComboBox(frame_2);
        comboBox_Channel->addItem(QString());
        comboBox_Channel->addItem(QString());
        comboBox_Channel->setObjectName(QString::fromUtf8("comboBox_Channel"));
        comboBox_Channel->setMinimumSize(QSize(0, 0));
        comboBox_Channel->setMaximumSize(QSize(99999, 99999));

        gridLayout->addWidget(comboBox_Channel, 1, 0, 1, 2);

        label_PortOpen_2 = new QLabel(frame_2);
        label_PortOpen_2->setObjectName(QString::fromUtf8("label_PortOpen_2"));
        label_PortOpen_2->setMinimumSize(QSize(0, 0));
        label_PortOpen_2->setMaximumSize(QSize(99999, 99999));

        gridLayout->addWidget(label_PortOpen_2, 6, 0, 1, 1);

        pushButton_Open = new QPushButton(frame_2);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));
        pushButton_Open->setMinimumSize(QSize(0, 0));
        pushButton_Open->setMaximumSize(QSize(999999, 999999));

        gridLayout->addWidget(pushButton_Open, 4, 2, 1, 1);

        pushButton_Close = new QPushButton(frame_2);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        pushButton_Close->setMinimumSize(QSize(0, 0));
        pushButton_Close->setMaximumSize(QSize(999999, 999999));

        gridLayout->addWidget(pushButton_Close, 5, 2, 1, 1);

        label_PortOpen = new QLabel(frame_2);
        label_PortOpen->setObjectName(QString::fromUtf8("label_PortOpen"));
        label_PortOpen->setMinimumSize(QSize(0, 0));
        label_PortOpen->setMaximumSize(QSize(99999, 99999));

        gridLayout->addWidget(label_PortOpen, 4, 0, 1, 2);

        pushButton_closeAll = new QPushButton(frame_2);
        pushButton_closeAll->setObjectName(QString::fromUtf8("pushButton_closeAll"));

        gridLayout->addWidget(pushButton_closeAll, 5, 0, 1, 2);


        gridLayout_3->addWidget(frame_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(731, 38));
        frame_4->setMaximumSize(QSize(731000, 16777215));
        frame_4->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_ChannleTips = new QLabel(frame_4);
        label_ChannleTips->setObjectName(QString::fromUtf8("label_ChannleTips"));
        label_ChannleTips->setMinimumSize(QSize(490, 18));
        label_ChannleTips->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));

        horizontalLayout_2->addWidget(label_ChannleTips);

        label_SendCount = new QLabel(frame_4);
        label_SendCount->setObjectName(QString::fromUtf8("label_SendCount"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_SendCount->sizePolicy().hasHeightForWidth());
        label_SendCount->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_SendCount);

        label_RecieveCount = new QLabel(frame_4);
        label_RecieveCount->setObjectName(QString::fromUtf8("label_RecieveCount"));
        sizePolicy1.setHeightForWidth(label_RecieveCount->sizePolicy().hasHeightForWidth());
        label_RecieveCount->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_RecieveCount);


        gridLayout_3->addWidget(frame_4, 3, 0, 1, 2);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setMaximumSize(QSize(16777215, 125));
        frame_3->setFrameShape(QFrame::StyledPanel);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(frame_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_Send = new QPushButton(frame_3);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        QFont font;
        font.setPointSize(11);
        pushButton_Send->setFont(font);

        verticalLayout_2->addWidget(pushButton_Send);

        pushButton_ClearSend = new QPushButton(frame_3);
        pushButton_ClearSend->setObjectName(QString::fromUtf8("pushButton_ClearSend"));
        pushButton_ClearSend->setFont(font);

        verticalLayout_2->addWidget(pushButton_ClearSend);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_3->addWidget(frame_3, 4, 0, 1, 2);

        MultiSerialPortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MultiSerialPortClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 764, 22));
        MultiSerialPortClass->setMenuBar(menuBar);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(MultiSerialPortClass);
        QObject::connect(pushButton_clearRecieve, SIGNAL(clicked()), MultiSerialPortClass, SLOT(clearRecieveOnclicked()));
        QObject::connect(pushButton_Open, SIGNAL(clicked()), MultiSerialPortClass, SLOT(openOnclicked()));
        QObject::connect(pushButton_Refresh, SIGNAL(clicked()), MultiSerialPortClass, SLOT(refreshOnclicked()));
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), MultiSerialPortClass, SLOT(showCurrentText()));
        QObject::connect(pushButton_Close, SIGNAL(clicked()), MultiSerialPortClass, SLOT(closeOnclicked()));
        QObject::connect(pushButton_closeAll, SIGNAL(clicked()), MultiSerialPortClass, SLOT(closeAllOnclicked()));
        QObject::connect(pushButton_addChannel, SIGNAL(clicked()), MultiSerialPortClass, SLOT(addChannelOnclicked()));
        QObject::connect(pushButton_editChannel, SIGNAL(clicked()), MultiSerialPortClass, SLOT(editChannelOnclicked()));
        QObject::connect(pushButton_deleteChannel, SIGNAL(clicked()), MultiSerialPortClass, SLOT(deleteChannelOnclicked()));
        QObject::connect(pushButton_ClearSend, SIGNAL(clicked()), MultiSerialPortClass, SLOT(clearSendOnclicked()));
        QObject::connect(pushButton_Send, SIGNAL(clicked()), MultiSerialPortClass, SLOT(sendOnclicked()));
        QObject::connect(comboBox_Channel, SIGNAL(currentTextChanged(QString)), MultiSerialPortClass, SLOT(channelChanged()));

        comboBox_Baud->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MultiSerialPortClass);
    } // setupUi

    void retranslateUi(QMainWindow *MultiSerialPortClass)
    {
        MultiSerialPortClass->setWindowTitle(QCoreApplication::translate("MultiSerialPortClass", "MultiSerialPort", nullptr));
        label_2->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\275\223\345\211\215\351\200\211\344\270\255\345\206\205\345\256\271", nullptr));
        pushButton_clearRecieve->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        pushButton_Refresh->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        comboBox_Parity->setItemText(0, QCoreApplication::translate("MultiSerialPortClass", "None", nullptr));
        comboBox_Parity->setItemText(1, QCoreApplication::translate("MultiSerialPortClass", "Old", nullptr));
        comboBox_Parity->setItemText(2, QCoreApplication::translate("MultiSerialPortClass", "Even", nullptr));

        comboBox_Date->setItemText(0, QCoreApplication::translate("MultiSerialPortClass", "8", nullptr));
        comboBox_Date->setItemText(1, QCoreApplication::translate("MultiSerialPortClass", "7", nullptr));
        comboBox_Date->setItemText(2, QCoreApplication::translate("MultiSerialPortClass", "6", nullptr));
        comboBox_Date->setItemText(3, QCoreApplication::translate("MultiSerialPortClass", "5", nullptr));

        label_Baud->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_Baud->setItemText(0, QCoreApplication::translate("MultiSerialPortClass", "110", nullptr));
        comboBox_Baud->setItemText(1, QCoreApplication::translate("MultiSerialPortClass", "300", nullptr));
        comboBox_Baud->setItemText(2, QCoreApplication::translate("MultiSerialPortClass", "600", nullptr));
        comboBox_Baud->setItemText(3, QCoreApplication::translate("MultiSerialPortClass", "1200", nullptr));
        comboBox_Baud->setItemText(4, QCoreApplication::translate("MultiSerialPortClass", "4800", nullptr));
        comboBox_Baud->setItemText(5, QCoreApplication::translate("MultiSerialPortClass", "9600", nullptr));
        comboBox_Baud->setItemText(6, QCoreApplication::translate("MultiSerialPortClass", "14400", nullptr));
        comboBox_Baud->setItemText(7, QCoreApplication::translate("MultiSerialPortClass", "19200", nullptr));
        comboBox_Baud->setItemText(8, QCoreApplication::translate("MultiSerialPortClass", "38400", nullptr));
        comboBox_Baud->setItemText(9, QCoreApplication::translate("MultiSerialPortClass", "43000", nullptr));
        comboBox_Baud->setItemText(10, QCoreApplication::translate("MultiSerialPortClass", "57600", nullptr));
        comboBox_Baud->setItemText(11, QCoreApplication::translate("MultiSerialPortClass", "76800", nullptr));
        comboBox_Baud->setItemText(12, QCoreApplication::translate("MultiSerialPortClass", "115200", nullptr));
        comboBox_Baud->setItemText(13, QCoreApplication::translate("MultiSerialPortClass", "128000", nullptr));
        comboBox_Baud->setItemText(14, QCoreApplication::translate("MultiSerialPortClass", "230400", nullptr));
        comboBox_Baud->setItemText(15, QCoreApplication::translate("MultiSerialPortClass", "256000", nullptr));
        comboBox_Baud->setItemText(16, QCoreApplication::translate("MultiSerialPortClass", "460800", nullptr));
        comboBox_Baud->setItemText(17, QCoreApplication::translate("MultiSerialPortClass", "921600", nullptr));
        comboBox_Baud->setItemText(18, QCoreApplication::translate("MultiSerialPortClass", "1000000", nullptr));
        comboBox_Baud->setItemText(19, QCoreApplication::translate("MultiSerialPortClass", "2000000", nullptr));
        comboBox_Baud->setItemText(20, QCoreApplication::translate("MultiSerialPortClass", "3000000", nullptr));

        label_Data->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_Stop->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_Parity->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_Stop->setItemText(0, QCoreApplication::translate("MultiSerialPortClass", "1", nullptr));
        comboBox_Stop->setItemText(1, QCoreApplication::translate("MultiSerialPortClass", "2", nullptr));
        comboBox_Stop->setItemText(2, QCoreApplication::translate("MultiSerialPortClass", "3", nullptr));

        label_Select->setText(QCoreApplication::translate("MultiSerialPortClass", "\344\270\262\345\217\243\350\277\236\346\216\245\351\200\211\346\213\251", nullptr));
        pushButton_addChannel->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\242\236\345\212\240\351\200\232\351\201\223", nullptr));
        textEdit_State->setHtml(QCoreApplication::translate("MultiSerialPortClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\252\350\277\236\346\216\245\344\270\213\344\275\215\346\234\272</p></body></html>", nullptr));
        pushButton_editChannel->setText(QCoreApplication::translate("MultiSerialPortClass", "\347\274\226\350\276\221\351\200\232\351\201\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("MultiSerialPortClass", "\344\270\213\344\275\215\346\234\272\351\200\232\351\201\223\351\200\211\346\213\251", nullptr));
        pushButton_deleteChannel->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\210\240\351\231\244\351\200\232\351\201\223", nullptr));
        comboBox_Channel->setItemText(0, QCoreApplication::translate("MultiSerialPortClass", "\351\200\232\351\201\2231(\346\270\251\345\272\246)", nullptr));
        comboBox_Channel->setItemText(1, QCoreApplication::translate("MultiSerialPortClass", "\351\200\232\351\201\2232(\346\271\277\345\272\246)", nullptr));

        label_PortOpen_2->setText(QCoreApplication::translate("MultiSerialPortClass", "\344\270\262\345\217\243\347\212\266\346\200\201", nullptr));
        pushButton_Open->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\226\255\345\274\200\344\270\262\345\217\243", nullptr));
        label_PortOpen->setText(QCoreApplication::translate("MultiSerialPortClass", "\344\270\262\345\217\243\346\223\215\344\275\234\357\274\232", nullptr));
        pushButton_closeAll->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\226\255\345\274\200\346\211\200\346\234\211\344\270\262\345\217\243", nullptr));
        label_ChannleTips->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\275\223\345\211\215\351\200\211\344\270\255\347\232\204\351\200\232\351\201\223\344\270\272\357\274\232\351\200\232\351\201\2231(\346\270\251\345\272\246)", nullptr));
        label_SendCount->setText(QCoreApplication::translate("MultiSerialPortClass", "Send\357\274\232               ", nullptr));
        label_RecieveCount->setText(QCoreApplication::translate("MultiSerialPortClass", "Recieve\357\274\232             ", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MultiSerialPortClass", "\345\217\221\351\200\201", nullptr));
        pushButton_ClearSend->setText(QCoreApplication::translate("MultiSerialPortClass", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiSerialPortClass: public Ui_MultiSerialPortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MULTISERIALPORTDGEHYF_H

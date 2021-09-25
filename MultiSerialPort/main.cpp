#include "MultiSerialPort.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MultiSerialPort w;
    w.show();
    return a.exec();
}

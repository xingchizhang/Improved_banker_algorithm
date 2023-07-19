#include "Improved_banker_algorithm.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/1.qss");
    if (file.open(QFile::ReadOnly))
    {
        qApp->setStyleSheet(file.readAll());
        file.close();
    }
    Improved_banker_algorithm w;
    w.show();
    return a.exec();
}

#include "MainWindow2.h"

MainWindow2::MainWindow2(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    w3 = new MainWindow3();
    connect(this, SIGNAL(sendStart3(method)), w3, SLOT(receiveStart3(method)));
}

MainWindow2::~MainWindow2()
{}

void MainWindow2::receiveStart(method Q)
{
    Q2 = Q;
    ui.textBrowser->setText(QString::fromLocal8Bit(QByteArray::fromStdString(Q2.ADM()[1])));
    if (Q2.ADM()[0]._Equal("Yes")) {
        Q2.SDM();
        ui.textBrowser_2->setText(QString::fromLocal8Bit(QByteArray::fromStdString(Q2.Get_SafeList_Show())));
        if (Q2.Get_Rat().SafeList.empty()) {
            ui.textBrowser_3->setText(QString::fromLocal8Bit(QByteArray::fromStdString("δͨ����ȫ�Լ�⣬���ܿ�չ����")));
            serveflag = false;
        }
        else {
            ui.textBrowser_3->setText(QString::fromLocal8Bit(QByteArray::fromStdString("��ͨ�����м�⣬���Կ�չ����")));
            serveflag = true;
        }
    }
    else {
        ui.textBrowser_2->setText(QString::fromLocal8Bit(QByteArray::fromStdString("δͨ���ɷ����⣡")));
        ui.textBrowser_3->setText(QString::fromLocal8Bit(QByteArray::fromStdString("δͨ���ɷ����⣬���ܿ�չ����")));
        serveflag = false;
    }

}

void MainWindow2::Start3(void)
{
    if (serveflag) {
        emit sendStart3(Q2);
        w3->show();
        this->close();
    }
}

void MainWindow2::Exit2(void)
{
    Q2.Clear();
    emit sendExit2();
    this->close();
}



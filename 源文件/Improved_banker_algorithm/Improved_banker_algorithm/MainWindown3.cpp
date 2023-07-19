#include "MainWindow3.h"

MainWindow3::MainWindow3(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Recording()));
}

MainWindow3::~MainWindow3()
{}

void MainWindow3::receiveStart3(method Q)
{
    Q3 = Q;
}

void MainWindow3::Recording(void)
{
    string str = "Time: " + to_string(Time) + "\n" + Q3.Get_Serve_State_Show();
    ui.textBrowser->setText(QString::fromLocal8Bit(QByteArray::fromStdString(str)));
    Time++;
    bool flag = true;
    for (int i = 0; i < Q3.Get_Rat().Finish.size(); i++) {
        if (!Q3.Get_Rat().Finish[i]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        timer->stop();
    }
}

void MainWindow3::Begin() {
    if (state == 0) {
        state = 1;
        ui.pushButton_2->setText(QString::fromLocal8Bit(QByteArray::fromStdString("ÔÝÍ£")));
        Q3.MSM();
        timer->start(1000);
    }
    else if(state == 1) { //·þÎñ×´Ì¬
        state = 2;
        ui.pushButton_2->setText(QString::fromLocal8Bit(QByteArray::fromStdString("¿ªÊ¼")));
        Q3.SetAllowToRun(false);
    }
    else { //ÔÝÍ£×´Ì¬
        state = 1;
        ui.pushButton_2->setText(QString::fromLocal8Bit(QByteArray::fromStdString("ÔÝÍ£")));
        Q3.SetAllowToRun(true);
    }
}

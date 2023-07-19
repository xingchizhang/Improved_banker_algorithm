#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Improved_banker_algorithm.h"
#include "MainWindow1.h"

#include <QFile>

class Improved_banker_algorithm : public QMainWindow
{
    Q_OBJECT

public:
    Improved_banker_algorithm(QWidget *parent = nullptr);
    ~Improved_banker_algorithm();

private:
    Ui::Improved_banker_algorithmClass ui;
    MainWindow1* w1;

signals:
    void sendData(int,int);

private slots://相应功能槽函数
    void PushButtonClicked1(void);
    void ExitShow(void);
};

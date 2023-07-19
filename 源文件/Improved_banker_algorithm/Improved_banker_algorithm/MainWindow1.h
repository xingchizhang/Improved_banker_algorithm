#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow1.h"
#include "MainWindow2.h"
#include "method.h"

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow1(QWidget* parent = nullptr);
    ~MainWindow1();

private:
    Ui::MainWindow1 ui;
    method Q = method();
    MainWindow2* w2;

signals:
    void sendExit(void);
    void sendStart(method);

private slots://相应功能槽函数
    void receiveData(int a,int b); //接受0中信号
    void RequestSet(void); 
    void Exit(void); //从1中退出
    void RequestRandom(void);
    void Start(void); //开始2
    void receiveExit2(void); //从2中退回
};
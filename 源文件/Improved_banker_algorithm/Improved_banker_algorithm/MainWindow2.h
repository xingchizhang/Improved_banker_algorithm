#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow2.h"
#include "MainWindow3.h"
#include "method.h"

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow2(QWidget* parent = nullptr);
    ~MainWindow2();

private:
    Ui::MainWindow2 ui;
    method Q2;
    MainWindow3* w3;
    bool serveflag = false; // �Ƿ���Կ�չ����

signals:
    void sendStart3(method);
    void sendExit2(void);

private slots://��Ӧ���ܲۺ���
    void receiveStart(method);
    void Start3(void); // ����3
    void Exit2(void); //��2���˳�
};
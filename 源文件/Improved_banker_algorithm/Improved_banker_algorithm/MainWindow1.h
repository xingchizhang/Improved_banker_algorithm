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

private slots://��Ӧ���ܲۺ���
    void receiveData(int a,int b); //����0���ź�
    void RequestSet(void); 
    void Exit(void); //��1���˳�
    void RequestRandom(void);
    void Start(void); //��ʼ2
    void receiveExit2(void); //��2���˻�
};
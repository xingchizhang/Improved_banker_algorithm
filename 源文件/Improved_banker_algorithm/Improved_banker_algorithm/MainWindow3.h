#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow3.h"
#include "method.h"
#include "QTimer"
#include "thread"
#include "string"

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow3(QWidget* parent = nullptr);
    ~MainWindow3();

private:
    Ui::MainWindow3 ui;
    method Q3;
    int state = 0;
    int Time = 0;
    QTimer* timer;

private slots://��Ӧ���ܲۺ���
    void receiveStart3(method);
    void Begin(void);
    void Recording(void);
};
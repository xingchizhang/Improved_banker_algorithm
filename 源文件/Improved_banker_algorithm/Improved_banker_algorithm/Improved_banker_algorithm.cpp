#include "Improved_banker_algorithm.h"
#include "MainWindow1.h"


Improved_banker_algorithm::Improved_banker_algorithm(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    w1 = new MainWindow1();
    connect(this, SIGNAL(sendData(int, int)), w1, SLOT(receiveData(int, int)));
    connect(w1, SIGNAL(sendExit(void)), this, SLOT(ExitShow(void)));
}

Improved_banker_algorithm::~Improved_banker_algorithm()
{}

void Improved_banker_algorithm::PushButtonClicked1()
{
    w1->show();
    emit sendData(ui.NumOfCustomers->value(), ui.NumOfResourceCategories->value());
    this->close();
}

void Improved_banker_algorithm::ExitShow()
{
    this->show();
}

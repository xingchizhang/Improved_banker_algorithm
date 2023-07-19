#include "MainWindow1.h"

MainWindow1::MainWindow1(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	w2 = new MainWindow2();
	connect(this, SIGNAL(sendStart(method)), w2, SLOT(receiveStart(method)));
	connect(w2, SIGNAL(sendExit2(void)), this, SLOT(receiveExit2(void)));
}

MainWindow1::~MainWindow1()
{}

void MainWindow1::receiveData(int a, int b)
{
	Q.SetCNum(a);
	Q.SetRNum(b);
	Q.RGM();
	ui.label_3->setText(QString::number(Q.Get_Rat().CNum));
	ui.label_5->setText(QString::number(Q.Get_Rat().RNum));

	ui.spinBox->setMaximum(Q.Get_Rat().CNum - 1);
	ui.spinBox_2->setMaximum(Q.Get_Rat().RNum - 1);

	ui.textBrowser_5->setText(QString::fromStdString(Q.Get_Request_Show()));
	ui.textBrowser->setText(QString::fromStdString(Q.Get_Available_Show()));
	ui.textBrowser_2->setText(QString::fromStdString(Q.Get_Allocated_Show()));
	ui.textBrowser_3->setText(QString::fromStdString(Q.Get_Need_Show()));
	ui.textBrowser_4->setText(QString::fromStdString(Q.Get_TOccupy_Show()));

	ui.pushButton->setFont(QFont("Microsoft YaHei UI", 12));
	ui.pushButton_2->setFont(QFont("Microsoft YaHei UI", 12));
	ui.pushButton_3->setFont(QFont("Microsoft YaHei UI", 12));
	ui.pushButton_4->setFont(QFont("Microsoft YaHei UI", 12));
	ui.label_7->setFont(QFont("Microsoft YaHei UI", 12));
	ui.label_9->setFont(QFont("Microsoft YaHei UI", 12));
	ui.label_10->setFont(QFont("Microsoft YaHei UI", 12));
	ui.label_11->setFont(QFont("Microsoft YaHei UI", 12));
	ui.label_13->setFont(QFont("Microsoft YaHei UI", 12));
	ui.textBrowser->setFont(QFont("Microsoft YaHei UI", 12));
	ui.textBrowser_2->setFont(QFont("Microsoft YaHei UI", 12));
	ui.textBrowser_3->setFont(QFont("Microsoft YaHei UI", 12));
	ui.textBrowser_4->setFont(QFont("Microsoft YaHei UI", 12));
	ui.textBrowser_5->setFont(QFont("Microsoft YaHei UI", 12));
	ui.spinBox->setFont(QFont("Microsoft YaHei UI", 12));
	ui.spinBox_2->setFont(QFont("Microsoft YaHei UI", 12));
	ui.spinBox_3->setFont(QFont("Microsoft YaHei UI", 12));

}

void MainWindow1::RequestSet(void)
{
	Q.SetRequest(ui.spinBox->value(), ui.spinBox_2->value(), ui.spinBox_3->value());
	ui.textBrowser_5->setText(QString::fromStdString(Q.Get_Request_Show()));
}

void MainWindow1::Exit(void)
{
	Q.Clear();
	emit sendExit();
	this->close();
}

void MainWindow1::RequestRandom(void)
{
	Q.RandomSetRequest();
	ui.textBrowser_5->setText(QString::fromStdString(Q.Get_Request_Show()));
}

void MainWindow1::Start(void)
{
	w2->show();
	emit sendStart(Q);
	this->close();
}

void MainWindow1::receiveExit2(void)
{
	this->show();
}

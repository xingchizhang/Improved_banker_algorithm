/********************************************************************************
** Form generated from reading UI file 'MainWindow3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName("MainWindow3");
        MainWindow3->resize(817, 670);
        MainWindow3->setMinimumSize(QSize(817, 670));
        MainWindow3->setMaximumSize(QSize(817, 670));
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 791, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R")});
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(110, 90, 691, 561));
        QFont font1;
        font1.setPointSize(12);
        textBrowser->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 80, 121, 39));
        label_4->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 20, 211, 41));
        pushButton_2->setFont(font1);
        MainWindow3->setCentralWidget(centralwidget);

        retranslateUi(MainWindow3);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow3, SLOT(Begin()));

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QCoreApplication::translate("MainWindow3", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow3", "\346\224\271\350\277\233\351\223\266\350\241\214\345\256\266\347\256\227\346\263\225", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow3", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow3", "\346\234\215\345\212\241\347\212\266\346\200\201\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow3", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H

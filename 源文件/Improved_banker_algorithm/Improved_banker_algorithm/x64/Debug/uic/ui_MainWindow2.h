/********************************************************************************
** Form generated from reading UI file 'MainWindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName("MainWindow2");
        MainWindow2->resize(817, 670);
        MainWindow2->setMinimumSize(QSize(817, 670));
        MainWindow2->setMaximumSize(QSize(817, 670));
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 791, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R")});
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 91, 41));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 20, 91, 41));
        pushButton_2->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 80, 121, 39));
        label_4->setFont(font1);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(150, 90, 651, 50));
        textBrowser_3->setFont(font1);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(150, 260, 651, 401));
        textBrowser_2->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 140, 121, 39));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 250, 121, 39));
        label_3->setFont(font1);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(150, 150, 651, 100));
        textBrowser->setFont(font1);
        MainWindow2->setCentralWidget(centralwidget);

        retranslateUi(MainWindow2);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow2, SLOT(Start3()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow2, SLOT(Exit2()));

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow2", "\346\224\271\350\277\233\351\223\266\350\241\214\345\256\266\347\256\227\346\263\225", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow2", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow2", "\346\234\215\345\212\241", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow2", "\346\243\200\346\265\213\347\212\266\346\200\201\357\274\232", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow2", "\345\217\257\345\210\206\351\205\215\346\243\200\346\265\213\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow2", "\345\256\211\345\205\250\346\200\247\346\243\200\346\265\213\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H

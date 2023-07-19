/********************************************************************************
** Form generated from reading UI file 'MainWindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_7;
    QTextBrowser *textBrowser_3;
    QLabel *label_9;
    QTextBrowser *textBrowser_4;
    QLabel *label_13;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName("MainWindow1");
        MainWindow1->resize(817, 670);
        MainWindow1->setMinimumSize(QSize(817, 670));
        MainWindow1->setMaximumSize(QSize(817, 670));
        QFont font;
        font.setPointSize(12);
        MainWindow1->setFont(font);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 791, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R")});
        font1.setPointSize(26);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 195, 121, 39));
        label_6->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 270, 121, 39));
        label_8->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(150, 200, 651, 70));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(150, 280, 651, 120));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 400, 121, 39));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(150, 410, 651, 120));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 530, 131, 39));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(150, 540, 651, 120));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 120, 121, 39));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(150, 120, 651, 70));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 20, 91, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 71, 781, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R")});
        font2.setPointSize(12);
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 8, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 0, 4, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 10, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(50);

        gridLayout->addWidget(spinBox_3, 0, 9, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(0);
        spinBox_2->setMaximum(10);

        gridLayout->addWidget(spinBox_2, 0, 7, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 6, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 0, 5, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 20, 91, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(620, 20, 91, 41));
        MainWindow1->setCentralWidget(centralwidget);

        retranslateUi(MainWindow1);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow1, SLOT(RequestSet()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow1, SLOT(Exit()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow1, SLOT(Start()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow1, SLOT(RequestRandom()));

        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow1", "\346\224\271\350\277\233\351\223\266\350\241\214\345\256\266\347\256\227\346\263\225", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow1", "\345\217\257\345\210\251\347\224\250\350\265\204\346\272\220\345\220\221\351\207\217\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow1", "\345\267\262\345\210\206\351\205\215\350\265\204\346\272\220\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow1", "\351\234\200\346\261\202\350\265\204\346\272\220\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow1", "\350\265\204\346\272\220\345\215\240\347\224\250\346\227\266\351\227\264\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow1", "\350\265\204\346\272\220\350\257\267\346\261\202\345\220\221\351\207\217\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow1", "\350\277\224\345\233\236", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow1", "---", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow1", "\350\257\267\346\261\202\345\256\242\346\210\267\357\274\232C", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow1", "3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow1", "\350\265\204\346\272\220\347\261\273\345\210\253\346\225\260\347\233\256\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow1", "\347\241\256\350\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow1", "\345\256\242\346\210\267\346\225\260\347\233\256\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow1", "3", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow1", "\350\257\267\346\261\202\350\265\204\346\272\220\357\274\232R", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow1", "\346\243\200\346\265\213", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow1", "\351\232\217\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H

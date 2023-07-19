/********************************************************************************
** Form generated from reading UI file 'Improved_banker_algorithm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPROVED_BANKER_ALGORITHM_H
#define UI_IMPROVED_BANKER_ALGORITHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Improved_banker_algorithmClass
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QSpinBox *NumOfCustomers;
    QSpinBox *NumOfResourceCategories;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Improved_banker_algorithmClass)
    {
        if (Improved_banker_algorithmClass->objectName().isEmpty())
            Improved_banker_algorithmClass->setObjectName("Improved_banker_algorithmClass");
        Improved_banker_algorithmClass->resize(817, 670);
        Improved_banker_algorithmClass->setMinimumSize(QSize(817, 670));
        Improved_banker_algorithmClass->setMaximumSize(QSize(817, 670));
        centralWidget = new QWidget(Improved_banker_algorithmClass);
        centralWidget->setObjectName("centralWidget");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 791, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R")});
        font.setPointSize(26);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 150, 161, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\344\273\277\345\256\213")});
        font1.setPointSize(18);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 230, 351, 311));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\344\273\277\345\256\213")});
        font2.setPointSize(12);
        textBrowser->setFont(font2);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 220, 311, 41));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 380, 201, 51));
        QFont font3;
        font3.setPointSize(12);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 300, 211, 51));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 490, 101, 41));
        pushButton->setFont(font3);
        NumOfCustomers = new QSpinBox(centralWidget);
        NumOfCustomers->setObjectName("NumOfCustomers");
        NumOfCustomers->setGeometry(QRect(610, 310, 132, 31));
        NumOfCustomers->setFont(font3);
        NumOfCustomers->setMinimum(1);
        NumOfCustomers->setMaximum(20);
        NumOfResourceCategories = new QSpinBox(centralWidget);
        NumOfResourceCategories->setObjectName("NumOfResourceCategories");
        NumOfResourceCategories->setGeometry(QRect(610, 390, 132, 31));
        NumOfResourceCategories->setFont(font3);
        NumOfResourceCategories->setMinimum(1);
        NumOfResourceCategories->setMaximum(14);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 490, 101, 41));
        pushButton_2->setFont(font3);
        Improved_banker_algorithmClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Improved_banker_algorithmClass);
        statusBar->setObjectName("statusBar");
        Improved_banker_algorithmClass->setStatusBar(statusBar);

        retranslateUi(Improved_banker_algorithmClass);
        QObject::connect(pushButton, SIGNAL(clicked()), Improved_banker_algorithmClass, SLOT(PushButtonClicked1()));
        QObject::connect(pushButton_2, &QPushButton::clicked, Improved_banker_algorithmClass, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Improved_banker_algorithmClass);
    } // setupUi

    void retranslateUi(QMainWindow *Improved_banker_algorithmClass)
    {
        Improved_banker_algorithmClass->setWindowTitle(QCoreApplication::translate("Improved_banker_algorithmClass", "Improved_banker_algorithm", nullptr));
        label_3->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\346\224\271\350\277\233\351\223\266\350\241\214\345\256\266\347\256\227\346\263\225", nullptr));
        label_4->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\345\212\237\350\203\275\344\273\213\347\273\215", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Improved_banker_algorithmClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\344\273\277\345\256\213'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">      \346\234\254\347\256\227\346\263\225\350\207\264\345\212\233\344\272\216\344\270\272\350\277\233\347\250\213\345\210\206\351\205\215\350\265\204\346\272\220\346\227\266\351\201\277\345\205\215\346\255\273\351\224\201\347\232\204\344\272\247\347\224\237\357\274\214\347\224\250\346\210\267\344\275\277\347\224\250\346\227\266\344\273"
                        "\205\351\234\200\350\246\201\350\276\223\345\205\245\345\256\242\346\210\267\346\225\260\347\233\256\344\273\245\345\217\212\350\265\204\346\272\220\347\261\273\345\210\253\346\225\260\347\233\256\345\215\263\345\217\257\357\274\214\347\263\273\347\273\237\344\274\232\350\207\252\350\241\214\344\270\272\345\205\266\351\232\217\346\234\272\345\210\235\345\247\213\345\214\226\345\205\266\344\273\226\345\277\205\350\246\201\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">       \347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\357\274\214\344\274\232\346\240\271\346\215\256\344\270\215\345\220\214\350\277\233\347\250\213\347\232\204\344\270\215\345\220\214\350\265\204\346\272\220\350\257\267\346\261\202\345\201\232\345\207\272\347\233\270\345\272\224\346\243\200\346\265\213\357\274\214\345\214\205\346\213\254\345\217\257\345\210\206"
                        "\351\205\215\346\243\200\346\265\213\344\273\245\345\217\212\345\256\211\345\205\250\346\200\247\346\243\200\346\265\213\343\200\202\345\271\266\344\270\272\351\200\232\350\277\207\346\243\200\346\265\213\347\232\204\350\277\233\347\250\213\345\210\206\351\205\215\350\265\204\346\272\220\357\274\214\350\276\223\345\207\272\344\270\216\345\205\266\345\257\271\345\272\224\347\232\204\346\211\200\346\234\211\345\256\211\345\205\250\345\272\217\345\210\227\357\274\214\350\277\231\344\272\233\345\272\217\345\210\227\344\274\232\346\240\271\346\215\256\350\265\204\346\272\220\345\210\251\347\224\250\346\225\210\347\216\207\350\277\233\350\241\214\346\216\222\345\272\217\343\200\202\347\263\273\347\273\237\345\234\250\345\212\237\350\203\275\345\256\236\347\216\260\346\227\266\347\273\223\345\220\210\344\272\206\345\244\232\347\272\277\347\250\213\346\234\215\345\212\241\347\232\204\346\212\200\346\234\257\357\274\214\350\277\220\350\241\214\351\200\237\347\216\207\346\233\264\345\277\253\357\274\214\346\233\264\351\253"
                        "\230\346\225\210\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">       \346\210\221\344\273\254\347\232\204\347\263\273\347\273\237\345\256\214\345\205\250\345\274\200\346\224\276\357\274\214\346\254\242\350\277\216\347\224\250\346\210\267\344\270\272\346\210\221\344\273\254\346\217\220\344\276\233\345\256\235\350\264\265\346\204\217\350\247\201\357\274\201</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\350\257\267\346\214\211\350\247\204\345\256\232\350\214\203\345\233\264\350\276\223\345\205\245\346\255\243\346\225\264\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\350\257\267\350\276\223\345\205\245\350\265\204\346\272\220\347\261\273\345\210\253\346\225\260\347\233\256 [1\357\274\21414]", nullptr));
        label->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\350\257\267\350\276\223\345\205\245\345\256\242\346\210\267\346\225\260\347\233\256 [1\357\274\21420]", nullptr));
        pushButton->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Improved_banker_algorithmClass", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Improved_banker_algorithmClass: public Ui_Improved_banker_algorithmClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPROVED_BANKER_ALGORITHM_H

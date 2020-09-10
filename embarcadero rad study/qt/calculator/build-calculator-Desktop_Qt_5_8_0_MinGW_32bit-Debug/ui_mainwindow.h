/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *ecran;
    QPushButton *button_backspace;
    QPushButton *button_1;
    QPushButton *button_4;
    QPushButton *button_7;
    QPushButton *button_clearscreen;
    QPushButton *button_2;
    QPushButton *button_8;
    QPushButton *button_5;
    QPushButton *button_3;
    QPushButton *button_clear;
    QPushButton *button_6;
    QPushButton *button_9;
    QPushButton *button_divide;
    QPushButton *button_minus;
    QPushButton *button_multiple;
    QPushButton *button_power2;
    QPushButton *button_sqrt;
    QPushButton *button_plus;
    QPushButton *button_dot;
    QPushButton *button_0;
    QPushButton *button_equal;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 497);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ecran = new QLineEdit(centralWidget);
        ecran->setObjectName(QStringLiteral("ecran"));
        ecran->setGeometry(QRect(10, 10, 341, 71));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(28);
        ecran->setFont(font);
        ecran->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        button_backspace = new QPushButton(centralWidget);
        button_backspace->setObjectName(QStringLiteral("button_backspace"));
        button_backspace->setGeometry(QRect(10, 90, 61, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        button_backspace->setFont(font1);
        button_1 = new QPushButton(centralWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setGeometry(QRect(10, 160, 61, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(14);
        font2.setItalic(false);
        font2.setKerning(true);
        button_1->setFont(font2);
        button_4 = new QPushButton(centralWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(10, 230, 61, 61));
        button_4->setFont(font2);
        button_7 = new QPushButton(centralWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setGeometry(QRect(10, 300, 61, 61));
        button_7->setFont(font2);
        button_clearscreen = new QPushButton(centralWidget);
        button_clearscreen->setObjectName(QStringLiteral("button_clearscreen"));
        button_clearscreen->setGeometry(QRect(80, 90, 61, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        button_clearscreen->setFont(font3);
        button_clearscreen->setAutoFillBackground(false);
        button_2 = new QPushButton(centralWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(80, 160, 61, 61));
        button_2->setFont(font2);
        button_8 = new QPushButton(centralWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setGeometry(QRect(80, 300, 61, 61));
        button_8->setFont(font2);
        button_5 = new QPushButton(centralWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setGeometry(QRect(80, 230, 61, 61));
        button_5->setFont(font2);
        button_3 = new QPushButton(centralWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(150, 160, 61, 61));
        button_3->setFont(font2);
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(150, 90, 61, 61));
        button_clear->setFont(font3);
        button_clear->setAutoFillBackground(false);
        button_6 = new QPushButton(centralWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setGeometry(QRect(150, 230, 61, 61));
        button_6->setFont(font2);
        button_9 = new QPushButton(centralWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setGeometry(QRect(150, 300, 61, 61));
        button_9->setFont(font2);
        button_divide = new QPushButton(centralWidget);
        button_divide->setObjectName(QStringLiteral("button_divide"));
        button_divide->setGeometry(QRect(220, 370, 61, 61));
        button_divide->setFont(font1);
        button_minus = new QPushButton(centralWidget);
        button_minus->setObjectName(QStringLiteral("button_minus"));
        button_minus->setGeometry(QRect(220, 160, 61, 61));
        button_minus->setFont(font1);
        button_multiple = new QPushButton(centralWidget);
        button_multiple->setObjectName(QStringLiteral("button_multiple"));
        button_multiple->setGeometry(QRect(220, 300, 61, 61));
        button_multiple->setFont(font1);
        button_power2 = new QPushButton(centralWidget);
        button_power2->setObjectName(QStringLiteral("button_power2"));
        button_power2->setGeometry(QRect(220, 90, 61, 61));
        button_power2->setFont(font3);
        button_sqrt = new QPushButton(centralWidget);
        button_sqrt->setObjectName(QStringLiteral("button_sqrt"));
        button_sqrt->setGeometry(QRect(290, 90, 61, 61));
        button_sqrt->setFont(font1);
        button_plus = new QPushButton(centralWidget);
        button_plus->setObjectName(QStringLiteral("button_plus"));
        button_plus->setGeometry(QRect(220, 230, 131, 61));
        button_plus->setFont(font1);
        button_dot = new QPushButton(centralWidget);
        button_dot->setObjectName(QStringLiteral("button_dot"));
        button_dot->setGeometry(QRect(150, 370, 61, 61));
        button_dot->setFont(font1);
        button_0 = new QPushButton(centralWidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setGeometry(QRect(10, 370, 131, 61));
        button_0->setFont(font2);
        button_equal = new QPushButton(centralWidget);
        button_equal->setObjectName(QStringLiteral("button_equal"));
        button_equal->setGeometry(QRect(290, 300, 61, 131));
        button_equal->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 170, 61, 16));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 190, 61, 16));
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 360, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ecran->setText(QString());
        ecran->setPlaceholderText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_backspace->setText(QApplication::translate("MainWindow", "\342\206\220", Q_NULLPTR));
        button_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        button_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        button_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        button_clearscreen->setText(QApplication::translate("MainWindow", "CE", Q_NULLPTR));
        button_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        button_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        button_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        button_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        button_clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        button_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        button_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        button_divide->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        button_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        button_multiple->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        button_power2->setText(QApplication::translate("MainWindow", "x\342\201\277", Q_NULLPTR));
        button_sqrt->setText(QApplication::translate("MainWindow", "\342\210\232x", Q_NULLPTR));
        button_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        button_dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        button_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "calculator", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "1337", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

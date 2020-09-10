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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buton0;
    QPushButton *buton1;
    QLineEdit *e;
    QLabel *l;
    QLineEdit *a;
    QLineEdit *b;
    QLineEdit *c;
    QLineEdit *rez;
    QLabel *l_2;
    QLabel *l_3;
    QPushButton *pushButton;
    QLineEdit *show;
    QPushButton *clear;
    QPushButton *p;
    QPushButton *m;
    QPushButton *eq;
    QPushButton *b9;
    QPushButton *clear_4;
    QPushButton *b6;
    QPushButton *pushButton_6;
    QPushButton *b5;
    QPushButton *pushButton_8;
    QPushButton *b8;
    QPushButton *clear_6;
    QPushButton *b4;
    QPushButton *pushButton_11;
    QPushButton *b7;
    QPushButton *clear_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(927, 660);
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        buton0 = new QPushButton(centralWidget);
        buton0->setObjectName(QStringLiteral("buton0"));
        buton0->setGeometry(QRect(710, 10, 211, 101));
        buton0->setFlat(false);
        buton1 = new QPushButton(centralWidget);
        buton1->setObjectName(QStringLiteral("buton1"));
        buton1->setGeometry(QRect(490, 548, 381, 101));
        buton1->setCursor(QCursor(Qt::CrossCursor));
        buton1->setFlat(false);
        e = new QLineEdit(centralWidget);
        e->setObjectName(QStringLiteral("e"));
        e->setGeometry(QRect(20, 548, 461, 101));
        l = new QLabel(centralWidget);
        l->setObjectName(QStringLiteral("l"));
        l->setGeometry(QRect(20, 510, 841, 31));
        QFont font1;
        font1.setPointSize(20);
        l->setFont(font1);
        a = new QLineEdit(centralWidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(20, 10, 71, 61));
        a->setAlignment(Qt::AlignCenter);
        b = new QLineEdit(centralWidget);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(120, 10, 71, 61));
        b->setAlignment(Qt::AlignCenter);
        c = new QLineEdit(centralWidget);
        c->setObjectName(QStringLiteral("c"));
        c->setGeometry(QRect(220, 10, 71, 61));
        c->setAlignment(Qt::AlignCenter);
        rez = new QLineEdit(centralWidget);
        rez->setObjectName(QStringLiteral("rez"));
        rez->setGeometry(QRect(330, 10, 71, 61));
        rez->setAlignment(Qt::AlignCenter);
        l_2 = new QLabel(centralWidget);
        l_2->setObjectName(QStringLiteral("l_2"));
        l_2->setGeometry(QRect(100, 20, 16, 31));
        l_2->setFont(font1);
        l_3 = new QLabel(centralWidget);
        l_3->setObjectName(QStringLiteral("l_3"));
        l_3->setGeometry(QRect(197, 20, 16, 31));
        l_3->setFont(font1);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 30, 20, 23));
        show = new QLineEdit(centralWidget);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(250, 100, 311, 61));
        show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(486, 165, 75, 51));
        p = new QPushButton(centralWidget);
        p->setObjectName(QStringLiteral("p"));
        p->setGeometry(QRect(485, 218, 75, 51));
        m = new QPushButton(centralWidget);
        m->setObjectName(QStringLiteral("m"));
        m->setGeometry(QRect(485, 270, 75, 51));
        eq = new QPushButton(centralWidget);
        eq->setObjectName(QStringLiteral("eq"));
        eq->setGeometry(QRect(484, 323, 75, 51));
        b9 = new QPushButton(centralWidget);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(409, 165, 75, 51));
        clear_4 = new QPushButton(centralWidget);
        clear_4->setObjectName(QStringLiteral("clear_4"));
        clear_4->setGeometry(QRect(408, 270, 75, 51));
        b6 = new QPushButton(centralWidget);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(408, 218, 75, 51));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(407, 323, 75, 51));
        b5 = new QPushButton(centralWidget);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(330, 218, 75, 51));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(329, 323, 75, 51));
        b8 = new QPushButton(centralWidget);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(331, 165, 75, 51));
        clear_6 = new QPushButton(centralWidget);
        clear_6->setObjectName(QStringLiteral("clear_6"));
        clear_6->setGeometry(QRect(330, 270, 75, 51));
        b4 = new QPushButton(centralWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(253, 217, 75, 51));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(252, 322, 75, 51));
        b7 = new QPushButton(centralWidget);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(254, 164, 75, 51));
        clear_10 = new QPushButton(centralWidget);
        clear_10->setObjectName(QStringLiteral("clear_10"));
        clear_10->setGeometry(QRect(253, 269, 75, 51));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        buton0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        buton1->setText(QApplication::translate("MainWindow", "Buton 1", Q_NULLPTR));
        e->setText(QApplication::translate("MainWindow", "123", Q_NULLPTR));
        l->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        a->setText(QString());
        a->setPlaceholderText(QApplication::translate("MainWindow", "a", Q_NULLPTR));
        b->setPlaceholderText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        c->setPlaceholderText(QApplication::translate("MainWindow", "c", Q_NULLPTR));
        rez->setPlaceholderText(QApplication::translate("MainWindow", "rez", Q_NULLPTR));
        l_2->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        l_3->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        show->setText(QString());
        show->setPlaceholderText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        p->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        m->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        eq->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        b9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        clear_4->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        b6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        b5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        b8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        clear_6->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        b4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_11->setText(QString());
        b7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        clear_10->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

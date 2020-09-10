#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_backspace_clicked()
{
   // ui->ecran->text().chop();
   // ui->ecran->text().remove(1,&rbegin);
   // ui->ecran->text().replace(1,)
   //ui->ecran->text().truncate( ui->ecran->text().lastIndexOf(ui->ecran->text()));
    QString z= ui->ecran->text();
    z.chop(1);
    ui->ecran->setText( z );
}

void MainWindow::on_button_clear_clicked()
{
    ui->ecran->clear();
    x=0;
    o=0;
    d=0;
}

void MainWindow::on_button_clearscreen_clicked()
{
    ui->ecran->clear();
    d=0;
}

//cifre
    void MainWindow::on_button_0_clicked()
    {
        if( ui->ecran->text()!="" && ui->ecran->text()!="0" )
        ui->ecran->setText(ui->ecran->text()+"0");
    }

    void MainWindow::on_button_1_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"1");
    }

    void MainWindow::on_button_2_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"2");
    }

    void MainWindow::on_button_3_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"3");
    }

    void MainWindow::on_button_4_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"4");
    }

    void MainWindow::on_button_5_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"5");
    }

    void MainWindow::on_button_6_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"6");
    }

    void MainWindow::on_button_7_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"7");
    }

    void MainWindow::on_button_8_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"8");
    }

    void MainWindow::on_button_9_clicked()
    {
        ui->ecran->setText(ui->ecran->text()+"9");
    }
//cifre end

// operatii
    void MainWindow::on_button_plus_clicked()
    {
        o=0; // +
        x=ui->ecran->text().toDouble();
        ui->ecran->clear();
    }

    void MainWindow::on_button_minus_clicked()
    {
        o=1; // -
        x=ui->ecran->text().toDouble();
        ui->ecran->clear();
    }

    void MainWindow::on_button_multiple_clicked()
    {
        o=2; // *
        x=ui->ecran->text().toDouble();
        ui->ecran->clear();
    }

    void MainWindow::on_button_divide_clicked()
    {
        o=3; // /
        x=ui->ecran->text().toDouble();
        ui->ecran->clear();
    }

    void MainWindow::on_button_power2_clicked()
    {
        o=4; // power any
        x=ui->ecran->text().toDouble();
        ui->ecran->clear();
    }

    void MainWindow::on_button_sqrt_clicked()
    {
        o=5; // sqrt
        x=ui->ecran->text().toDouble();
        on_button_equal_clicked();
        //ui->ecran->setText("press = ");
    }
// operatii end

void MainWindow::on_button_equal_clicked()
{
    switch(o)
    {
        case 0: ui->ecran->setText(QString::number( x + (ui->ecran->text().toDouble()) ) ); break;
        case 1: ui->ecran->setText(QString::number( x - (ui->ecran->text().toDouble()) ) ); break;
        case 2: ui->ecran->setText(QString::number( x * (ui->ecran->text().toDouble()) ) ); break;
        case 3: ui->ecran->setText(QString::number( x / (ui->ecran->text().toDouble()) ) ); break;
        case 4: ui->ecran->setText(QString::number( pow(x, (ui->ecran->text().toDouble())) ) ); break;
        case 5: ui->ecran->setText(QString::number( sqrt(x) ) ); break;
    }
}


void MainWindow::on_button_dot_clicked()
{
    if(d==0)
    {
        if( ui->ecran->text()!="" )
        ui->ecran->setText( ui->ecran->text() + "." );
        else
        ui->ecran->setText( ui->ecran->text() + "0." );
    }d=1;

}



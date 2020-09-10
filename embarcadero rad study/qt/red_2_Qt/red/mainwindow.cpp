#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_buton0_clicked()
{
   int x = ui->buton0->text().toInt();
   x++;
   ui->buton0->setText( QString::number(x) );

}

void MainWindow::on_buton1_clicked()
{
  ui->buton1->setText( ui->e->text() );
}

void MainWindow::on_e_textChanged(const QString &arg1)
{
  ui->l->setText( ui->e->text() );
}

void MainWindow::on_pushButton_clicked()
{

    ui->rez->setText( QString::number( ui->a->text().toInt()+
                                       ui->b->text().toInt()-
                                       ui->c->text().toInt()) );


}

void MainWindow::on_clear_clicked()
{
   ui->show->clear();
    //ui->show->setText("0");

}

void MainWindow::on_b9_clicked()
{
    ui->show->setText(ui->show->text()+"9");
}

void MainWindow::on_b8_clicked()
{
    ui->show->setText(ui->show->text()+"8");
}

void MainWindow::on_p_clicked()
{
    o=0;
    x=ui->show->text().toInt();
    ui->show->clear();
}

void MainWindow::on_eq_clicked()
{
    switch(o)
    {
    case 0: ui->show->setText(QString::number( x+ui->show->text().toInt() )); break;
    }



}










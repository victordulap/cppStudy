#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    //   0 +,   1 -,   2 *, 3 /
    int o;
    int x;


private slots:
    void on_buton0_clicked();

    void on_buton1_clicked();

    void on_e_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_clear_clicked();

    void on_b9_clicked();

    void on_b8_clicked();

    void on_p_clicked();

    void on_eq_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

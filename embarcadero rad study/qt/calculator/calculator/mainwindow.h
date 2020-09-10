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

    //   0 +,   1 -,   2 *, 3 /, 4 power any, 5 sqrt
    int o=0;
    double x=0;
    bool d=0;

private slots:
    void on_button_backspace_clicked();

    void on_button_clear_clicked();

    void on_button_clearscreen_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_plus_clicked();

    void on_button_minus_clicked();

    void on_button_multiple_clicked();

    void on_button_divide_clicked();

    void on_button_equal_clicked();

    void on_button_0_clicked();

    void on_button_dot_clicked();

    void on_button_power2_clicked();

    void on_button_sqrt_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

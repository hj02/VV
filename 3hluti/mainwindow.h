#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scientist.h"
#include "scienceservice.h"
#include <string>




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_rbFemaleS_clicked();
    void on_rbMaleS_clicked();
    void on_rbBothS_clicked();
    void on_pbAddS_clicked();
    void on_pbAddC_clicked();

private:
    Ui::MainWindow *ui;
    void start();
    ScienceService scienceService;
};

#endif // MAINWINDOW_H

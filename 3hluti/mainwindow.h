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
    void start();
    ~MainWindow();

private slots:

   /* void on_rbFemaleS_clicked();
    void on_rbMaleS_clicked();*/
    void on_rbAliveS_clicked();
    void on_pbAddS_clicked();
    void on_pbAddC_clicked();
    void on_pushButtonSearch_clicked();

    void on_Searchbutton_clicked();

    void on_TxtSearchTerm_returnPressed();

    void on_pbSortS_clicked();

    void on_pbSortC_clicked();

    bool yearTrue(std::string year);
    void firstToUpper(std::string& finding);
    void toLower(std::string& str);
    bool dateTrue(std::string date);


private:
    Ui::MainWindow *ui;

    ScienceService scienceService;
};

#endif // MAINWINDOW_H

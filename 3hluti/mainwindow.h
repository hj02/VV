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

    void on_rbAliveS_clicked();
<<<<<<< HEAD
    void on_btnAddScientist_clicked();
    void on_btnAddComputer_clicked();
    void on_btnSearchFind_clicked();
    void on_edtSearchTerm_returnPressed();
    void on_btnSortScientist_clicked();
    void on_btnSortComputer_clicked();
=======
    void on_pbAddS_clicked();
    void on_pbAddC_clicked();

    void on_Searchbutton_clicked();

    void on_TxtSearchTerm_returnPressed();

    void on_pbSortS_clicked();

    void on_pbSortC_clicked();

>>>>>>> 183ba7da12f4b68be8ab4ecbd0cd8e5d9533130d
    bool yearTrue(std::string year);
    void firstToUpper(std::string& finding);
    void toLower(std::string& str);
    bool dateTrue(std::string date);
<<<<<<< HEAD
    void on_tbFind_tabBarClicked(int index);
    void on_btnClearFind_clicked();
    void on_btnClearComputer_clicked();
    void on_btnClearScientist_clicked();
=======
    void fillComboBox();
>>>>>>> 183ba7da12f4b68be8ab4ecbd0cd8e5d9533130d

    void on_btnClearConnect_clicked();

    void on_rb_removeC_pressed();

    void on_rb_removeS_pressed();

    void on_removebutton_clicked();

    void on_connectbutton_clicked();

private:
    Ui::MainWindow *ui;

    ScienceService scienceService;
};

#endif // MAINWINDOW_H

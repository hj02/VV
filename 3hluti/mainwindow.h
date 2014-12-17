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


    void on_cbAliveS_clicked();
    void on_pbAddS_clicked();
    void on_pbAddC_clicked();
    void on_pbSortS_clicked();
    void on_pbSortC_clicked();
    void on_searchButton_clicked();
    void on_TxtSearchTerm_returnPressed();
    void on_connectButton_clicked();
    void on_showConnection_clicked();
    void on_rbRemoveC_pressed();
    void on_rbRemoveS_pressed();
    void on_removebutton_clicked();
    void on_remove2button_clicked(); 
    void on_btnClear_clicked();
    void on_tbFind_tabBarClicked(int index);
    void on_quitButton_clicked();
    void on_btnClearFind_clicked();

private:
    Ui::MainWindow *ui;

    ScienceService scienceService;
    bool yearTrue(std::string year); // returns if the year is in right format
    void firstToUpper(std::string& finding); // first character in every word goes to upper case
    void toLower(std::string& str); // returns the string in lowercase
    bool dateTrue(std::string date); // returns if the date is in the right format
    void fillComboBox(); // fills out comboboxes in connect
    void fillComboBox2(); //  fills out second combobox in remove
};

#endif // MAINWINDOW_H

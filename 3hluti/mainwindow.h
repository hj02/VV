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

    void on_Searchbutton_clicked();
    void on_TxtSearchTerm_returnPressed();
    void on_pbSortS_clicked();
    void on_pbSortC_clicked();
    bool yearTrue(std::string year);
    void firstToUpper(std::string& finding);
    void toLower(std::string& str);
    bool dateTrue(std::string date);
    void fillComboBox();
    void on_rb_removeC_pressed();
    void on_rb_removeS_pressed();
    void on_removebutton_clicked();
    void on_connectbutton_clicked();
    void on_showconnection_clicked();
    void on_remove2button_clicked();
    void fillComboBox2();
    void on_btnClear_clicked();
    void on_tbFind_tabBarClicked(int index);
//    void on_label_2_linkActivated(const QString &link);
    void on_pushButton_clicked();

    void on_btnClearFind_clicked();

private:
    Ui::MainWindow *ui;

    ScienceService scienceService;
};

#endif // MAINWINDOW_H

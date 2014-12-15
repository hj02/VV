#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scienceservice.h"
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scienceService = ScienceService();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{
    scienceService.open();
}

void MainWindow::on_rbFemaleS_clicked()
{
    ui->pbAddS->setEnabled(true);
}

void MainWindow::on_rbMaleS_clicked()
{
    ui->pbAddS->setEnabled(true);
}

void MainWindow::on_rbBothS_clicked()
{
  ui->pbAddS->setEnabled(false);
}

void MainWindow::on_pbAddS_clicked()
{
    Scientist additionalScientist = Scientist();

    std::string NAME = "";
    NAME = ui->edtNameS->text().toStdString();
    additionalScientist.name = NAME;

    std::string DOB = "";
    DOB = ui->edtDobS->text().toStdString();
    additionalScientist.dateOfBirth = DOB;

    std::string DOD = "";
    DOD = ui->edtDodS->text().toStdString();
    additionalScientist.dateOfDeath = DOD;

    std::string GENDER;
    if(ui->rbFemaleS){
        GENDER = "Female";
    }else GENDER = "Male";

    if(ui->rbMaleS){
        GENDER = "Male";
    }else GENDER = "Female";
    additionalScientist.gender=GENDER;

    scienceService.addScientist(additionalScientist);

    ui->edtNameS->clear();
    ui->edtDobS->clear();
    ui->edtDodS->clear();
}

void MainWindow::on_pbAddC_clicked()
{
    Computer additionalComputer = Computer();

    std::string BRAND = "";
    BRAND = ui->edtBrand->text().toStdString();
    additionalComputer.brand = BRAND;

    std::string TYPE = "";
    TYPE = ui->edtType->text().toStdString();
    additionalComputer.type = TYPE;

    std::string YEAR = "";
    YEAR = ui->edtYear->text().toStdString();
    additionalComputer.year = YEAR;

    std::string BUILT;

    if(ui->checkBox_2){
        BUILT = "Yes";
    }else BUILT = "No";
    additionalComputer.built = BUILT;

    scienceService.addComputer(additionalComputer);

    ui->edtBrand->clear();
    ui->edtType->clear();
    ui->edtYear->clear();
}


/*

//for(unsigned int i = 0; i < currentCars.size(); ++i)
//{
    //std::string searchString = ui->input_search_cars->text().toStdString();

    if(currentCar.contains(searchString))
    {
        QString carBrand = QString::fromStdString(currentCar.getBrand());
        QString carModel = QString::fromStdString(currentCar.getModel());
        QString carColor = QString::fromStdString(currentCar.getColor());

        int currentRow = currentlyDisplayedCars.size();

        ui->table_cars->setItem(currentRow, 0, new QTableWidgetItem(carBrand));
        ui->table_cars->setItem(currentRow, 1, new QTableWidgetItem(carModel));
        ui->table_cars->setItem(currentRow, 2, new QTableWidgetItem(carColor));

        currentlyDisplayedCars.push_back(currentCar);
//    }
//}*/




void MainWindow::on_Searchbutton_clicked()
{
    std::string mnot = "";
    QString result(mnot.c_str());
    ui->prufasearch->setText(result);

    std::string searchTerm = ui->TxtSearchTerm->text().toStdString();
    if(ui->radioBScientist->isChecked()){
        ui->SearchShowlist->setHorizontalHeaderItem(0,new QTableWidgetItem("Name"));
        ui->SearchShowlist->setHorizontalHeaderItem(1,new QTableWidgetItem("Gender"));
        ui->SearchShowlist->setHorizontalHeaderItem(2,new QTableWidgetItem("Date of birth"));
        ui->SearchShowlist->setHorizontalHeaderItem(3,new QTableWidgetItem("Date of death"));

        std::list<Scientist> s = scienceService.searchScientist(searchTerm);

        int rowSize = s.size();
        ui->SearchShowlist->setRowCount(rowSize);
        ui->SearchShowlist->setColumnCount(4);

        if(s.size() > 0) {
            int currentRow = 0;

             for(std::list<Scientist>::iterator iter = s.begin(); iter != s.end(); iter ++){

                 QString name = QString::fromStdString(iter->name);
                 QString gender = QString::fromStdString(iter->gender);
                 QString Dob = QString::fromStdString(iter->dateOfBirth);
                 QString Dod = QString::fromStdString(iter->dateOfDeath);

                 ui->SearchShowlist ->setItem(currentRow, 0, new QTableWidgetItem(name));
                 ui->SearchShowlist->setItem(currentRow, 1, new QTableWidgetItem(gender));
                 ui->SearchShowlist->setItem(currentRow, 2, new QTableWidgetItem(Dob));
                 ui->SearchShowlist->setItem(currentRow, 3, new QTableWidgetItem(Dod));
                 currentRow++;
              }
        }
        else{
          std::string mnot = "No scientist found!";
          QString result(mnot.c_str());
          ui->prufasearch->setText(result);
          }

    }
    else{
        ui->SearchShowlist->setHorizontalHeaderItem(0,new QTableWidgetItem("Brand"));
        ui->SearchShowlist->setHorizontalHeaderItem(1,new QTableWidgetItem("Year"));
        ui->SearchShowlist->setHorizontalHeaderItem(2,new QTableWidgetItem("Type"));
        ui->SearchShowlist->setHorizontalHeaderItem(3,new QTableWidgetItem("Built"));

        std::list<Computer> s = scienceService.searchComputer(searchTerm);

        int rowSize = s.size();
        ui->SearchShowlist->setRowCount(rowSize);
        ui->SearchShowlist->setColumnCount(4);

        if(s.size() > 0) {
            int currentRow = 0;

             for(std::list<Computer>::iterator iter = s.begin(); iter != s.end(); iter ++){

                 QString brand = QString::fromStdString(iter->brand);
                 QString year = QString::fromStdString(iter->year);
                 QString type = QString::fromStdString(iter->type);
                 QString built = QString::fromStdString(iter->built);

                 ui->SearchShowlist ->setItem(currentRow, 0, new QTableWidgetItem(brand));
                 ui->SearchShowlist->setItem(currentRow, 1, new QTableWidgetItem(year));
                 ui->SearchShowlist->setItem(currentRow, 2, new QTableWidgetItem(type));
                 ui->SearchShowlist->setItem(currentRow, 3, new QTableWidgetItem(built));
                 currentRow++;
              }
        }
        else{
          std::string mnot = "No computer found!";
          QString result(mnot.c_str());
          ui->prufasearch->setText(result);
          }
    }
}

void MainWindow::on_TxtSearchTerm_returnPressed()
{
    on_Searchbutton_clicked();
}

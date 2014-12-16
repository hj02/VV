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
    fillComboBox();
    on_rb_removeS_pressed();
}


void MainWindow::on_rbAliveS_clicked()
{
  if(ui->rbAliveS->isChecked())
    ui->edtDodS->setEnabled(false);
  else ui->edtDodS->setEnabled(true);
}


void MainWindow::on_pbAddS_clicked()
{
    Scientist additionalScientist = Scientist();
    std::string format = "";
    std::string format2= "";
    QString strformat(format.c_str());
    QString strformat2(format2.c_str());
    ui->errormsgS->setText(strformat);
    ui->errormsg2S->setText(strformat2);

    std::string NAME = "";
    NAME = ui->edtNameS->text().toStdString();
    toLower(NAME);
    firstToUpper(NAME);
    additionalScientist.name = NAME;

    std::string DOB = "";
    DOB = ui->edtDobS->text().toStdString();
    additionalScientist.dateOfBirth = DOB;

    std::string DOD = "";
    if(ui->rbAliveS->isChecked()){

        DOD="Alive";

    }else{

        DOD = ui->edtDodS->text().toStdString();
    }

    additionalScientist.dateOfDeath = DOD;

    std::string GENDER;
    if(ui->rbFemaleS){
        GENDER = "female";
    }else GENDER = "male";

    if(ui->rbMaleS){
        GENDER = "male";
    }else GENDER = "female";
    additionalScientist.gender=GENDER;

    if(NAME==""){
        format = "Please insert the name.";
        QString strformat(format.c_str());
        ui->errormsgS->setText(strformat);
    }else if(!dateTrue(DOB) || (!dateTrue(DOD) && DOD!="Alive")){

        format = "The format of date must be:";
        format2 = "yyyy-mm-dd";
        QString strformat(format.c_str());
        QString strformat2(format2.c_str());
        ui->errormsgS->setText(strformat);
        ui->errormsg2S->setText(strformat2);

    }else{
          scienceService.addScientist(additionalScientist);
          ui->edtNameS->clear();
          ui->edtDobS->clear();
          ui->edtDodS->clear();
          ui->errormsgS->clear();
          ui->errormsg2S->clear();

    }
}

void MainWindow::on_pbAddC_clicked()
{
    Computer additionalComputer = Computer();
    std::string format = "";
    QString strformat(format.c_str());
    ui->errormsgC->setText(strformat);

    std::string BRAND = "";
    BRAND = ui->edtBrand->text().toStdString();
    toLower(BRAND);
    firstToUpper(BRAND);
    additionalComputer.brand = BRAND;

    std::string TYPE = "";
    TYPE = ui->edtType->text().toStdString();
    toLower(TYPE);
    firstToUpper(TYPE);
    additionalComputer.type = TYPE;

    std::string YEAR = "";
    YEAR = ui->edtYear->text().toStdString();
    additionalComputer.year = YEAR;

    std::string BUILT;

    if(ui->checkBox_2){
    BUILT = "Yes";
    }else BUILT = "No";
    additionalComputer.built = BUILT;

    if(BRAND==""){
        format = "Please insert the brand.";
        QString strformat(format.c_str());
        ui->errormsgC->setText(strformat);
    }else if(TYPE==""){

        format = "Please insert the type.";
        QString strformat(format.c_str());
        ui->errormsgC->setText(strformat);

    }else if(!yearTrue(YEAR)){

        format = "The format of year must be yyyy";
        QString strformat(format.c_str());
        ui->errormsgC->setText(strformat);

    }else{
          scienceService.addComputer(additionalComputer);
          ui->edtBrand->clear();
          ui->edtType->clear();
          ui->edtYear->clear();
          ui->errormsgC->clear();

    }
}



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

void MainWindow::on_pbSortS_clicked()
{
    std::string col = "";

    switch (ui->cmbScientist->currentIndex()){

    case 0:
        col = "name";
        break;
    case 1:
        col = "dob";
        break;
    case 2:
        col="dod";
        break;
    case 3:
        col="gender";
        break;

    }

    std::string mod = "";
    if(ui->rbAscS->isChecked()){
        mod = "asc";
    }
    if(ui->rbDescS->isChecked()){
        mod = "desc";
    }

    ui->tableScientist->setHorizontalHeaderItem(0,new QTableWidgetItem("Name"));
    ui->tableScientist->setHorizontalHeaderItem(1,new QTableWidgetItem("Gender"));
    ui->tableScientist->setHorizontalHeaderItem(2,new QTableWidgetItem("Date of birth"));
    ui->tableScientist->setHorizontalHeaderItem(3,new QTableWidgetItem("Date of death?"));

    std::list<Scientist> s = scienceService.getScientistsOrderedBy(col,mod);

    int rowSize = s.size();
    ui->tableScientist->setRowCount(rowSize);
    ui->tableScientist->setColumnCount(4);


    int currentRow = 0;

    for(std::list<Scientist>::iterator iter = s.begin(); iter != s.end(); iter ++){

        QString name = QString::fromStdString(iter->name);
        QString gender = QString::fromStdString(iter->gender);
        QString dob = QString::fromStdString(iter->dateOfBirth);
        QString dod = QString::fromStdString(iter->dateOfDeath);

        ui->tableScientist ->setItem(currentRow, 0, new QTableWidgetItem(name));
        ui->tableScientist->setItem(currentRow, 1, new QTableWidgetItem(gender));
        ui->tableScientist->setItem(currentRow, 2, new QTableWidgetItem(dob));
        ui->tableScientist->setItem(currentRow, 3, new QTableWidgetItem(dod));
        currentRow++;

    }
}


void MainWindow::on_pbSortC_clicked()
{
    std::string col = "";
    switch (ui->cmbComputers->currentIndex()){

    case 0:
        col = "brand";
        break;
    case 1:
        col = "type";
        break;
    case 2:
        col="year";
        break;
    case 3:
        col="built";
        break;

    }

    std::string mod = "";
    if(ui->rbAscC->isChecked()){
        mod = "asc";
    }
    if(ui->rbDescC->isChecked()){
        mod = "desc";
    }

    ui->tableComputer->setHorizontalHeaderItem(0,new QTableWidgetItem("Brand"));
    ui->tableComputer->setHorizontalHeaderItem(1,new QTableWidgetItem("Year"));
    ui->tableComputer->setHorizontalHeaderItem(2,new QTableWidgetItem("Type"));
    ui->tableComputer->setHorizontalHeaderItem(3,new QTableWidgetItem("Built?"));

    std::list<Computer> c = scienceService.getComputersOrderedBy(col,mod);

    int rowSize = c.size();
    ui->tableComputer->setRowCount(rowSize);
    ui->tableComputer->setColumnCount(4);


    int currentRow = 0;

    for(std::list<Computer>::iterator iter = c.begin(); iter != c.end(); iter ++){

        QString brand = QString::fromStdString(iter->brand);
        QString year = QString::fromStdString(iter->year);
        QString type = QString::fromStdString(iter->type);
        QString built = QString::fromStdString(iter->built);

        ui->tableComputer ->setItem(currentRow, 0, new QTableWidgetItem(brand));
        ui->tableComputer->setItem(currentRow, 1, new QTableWidgetItem(year));
        ui->tableComputer->setItem(currentRow, 2, new QTableWidgetItem(type));
        ui->tableComputer->setItem(currentRow, 3, new QTableWidgetItem(built));
        currentRow++;

    }
}

bool MainWindow::yearTrue(std::string year){
    int SIZE = year.size();
    if(SIZE == 4)
    {
        int T=0;
        int s = year.size();
        for(int i=0; i<s; i++){
            if(isdigit(year[i]))
                T=1;
            else {T=0;
                break;}
        }
        if(T==1) return true;
    }
    return false;
}

void MainWindow::toLower(std::string& str){
    int a = str.size();

    for(int i=0; i<a; i++){
        str[i]=tolower(str[i]);
    }
}

void MainWindow::firstToUpper(std::string& finding){

    int teljari = -1;
    int lengd = finding.length();
    finding[0] = toupper(finding[0]);

    for(int i = 0; i < lengd; i++){
        if(isspace(finding[i])){

            teljari = teljari -1;
        }
        if(teljari < -1){

            finding[i+1] = toupper(finding[i+1]);
            teljari = -1;
        }
    }
}

bool MainWindow::dateTrue(std::string date){
    int T=0;
    if(date.size()==10){ // the string must have exactly 10 characters

        for(int i=0; i<4; i++){ // the first four characters must be digits

            if(isdigit(date[i]))

                T=1;
            else{

                T=0;
                break;
            }
        }
        if(T==1){

            if(date[4]=='-' && date[7]=='-'){ // 5th and 8th character must be '-'

                if(isdigit(date[5]) && isdigit(date[6])){ // 6th and 7th character must be digits

                    if(isdigit(date[8]) && isdigit(date[9])){ // 9th and 10th characther must be digits

                        return true; //if every if statement is true then the date is in right format and function returns true
                    }
                }
            }
        }
    }
    return false; // if not every if statement is true then the function returns false
}

void MainWindow::fillComboBox(){


        std::list<Scientist> sc = scienceService.searchScientist("");

        for(std::list<Scientist>::iterator iter = sc.begin(); iter != sc.end(); iter ++){

            QString SID = QString::number(iter->sID);
            QString name = QString::fromStdString(iter->name);
            QString sum = SID + "  " + name;
            ui->comboBox_SID->addItem(sum);
        }

        std::list<Computer> co = scienceService.searchComputer("");

        for(std::list<Computer>::iterator iter = co.begin(); iter != co.end(); iter ++){

            QString ID = QString::number(iter->cID);
            QString brand = QString::fromStdString(iter->brand);
            QString sum = ID + "  " + brand;
            ui->comboBox_CID->addItem(sum);
        }
}

void MainWindow::on_rb_removeC_pressed()
{
    ui->comboBox_remove->clear();
    std::list<Computer> co = scienceService.searchComputer("");

    for(std::list<Computer>::iterator iter = co.begin(); iter != co.end(); iter ++){

        QString ID = QString::number(iter->cID);
        QString brand = QString::fromStdString(iter->brand);
        QString sum = ID + "  " + brand;
        ui->comboBox_remove->addItem(sum);
    }
}

void MainWindow::on_rb_removeS_pressed()
{
    ui->comboBox_remove->clear();
    std::list<Scientist> sc = scienceService.searchScientist("");

    for(std::list<Scientist>::iterator iter = sc.begin(); iter != sc.end(); iter ++){

        QString SID = QString::number(iter->sID);
        QString name = QString::fromStdString(iter->name);
        QString sum = SID + "  " + name;
        ui->comboBox_remove->addItem(sum);
    }
}

void MainWindow::on_removebutton_clicked()
{
    if(ui->rb_removeC->isChecked()){
    QString qstr = ui->comboBox_remove->currentText();
    std::string str = qstr.toStdString();
    std::string id ="";
    int i=0;
    do{
       id=id+str[i];
     i++;
    }while(!isspace(str[i]));

    scienceService.deleteComputer(id);
    }
    if(ui->rb_removeS->isChecked()){
        QString qstr = ui->comboBox_remove->currentText();
        std::string str = qstr.toStdString();
        std::string id ="";
        int i=0;
        do{
           id=id+str[i];
        i++;
        }while(!isspace(str[i]));
        scienceService.deleteScientist(id);
     }
}

void MainWindow::on_connectbutton_clicked()
{


    QString qstrS = ui->comboBox_SID->currentText();
    std::string strS = qstrS.toStdString();

    std::string idS ="";
    int j=0;
    do{
       idS=idS+strS[j];
    j++;
    }while(!isspace(strS[j]));


    QString qstrC = ui->comboBox_CID->currentText();
    std::string strC = qstrC.toStdString();

    std::string idC ="";
    int i=0;
    do{
       idC=idC+strC[i];
    i++;
    }while(!isspace(strC[i]));

    scienceService.connect(idS, idC);

    ui->lblScientist_no1->setText(QString::fromStdString(idS));
    ui->lblComputer_no1->setText(QString::fromStdString(idC));
}

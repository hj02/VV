/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionScientist;
    QAction *actionComputer;
    QAction *actionConnection;
    QAction *actionComputer_2;
    QAction *actionConnection_2;
    QAction *actionBy_name;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tbFind;
    QWidget *tbScientist;
    QLabel *lblDodS;
    QLabel *lblNameS;
    QLabel *lblDobS;
    QLineEdit *edtNameS;
    QColumnView *colScientists;
    QPushButton *pbAddS;
    QGroupBox *grbSortS;
    QComboBox *cmbSortS;
    QRadioButton *rbAscS;
    QRadioButton *rbDescS;
    QPushButton *pbSortS;
    QLineEdit *edtDobS;
    QLineEdit *edtDodS;
    QGroupBox *groupBox;
    QRadioButton *rbFemaleS;
    QRadioButton *rbMaleS;
    QRadioButton *rbBothS;
    QWidget *tbComputers_2;
    QLabel *lblBrand;
    QLineEdit *edtBrand;
    QLabel *lblType;
    QLineEdit *edtYear;
    QLineEdit *edtType;
    QCheckBox *checkBox_2;
    QLabel *lblYear;
    QColumnView *colComputers;
    QPushButton *pbAddC;
    QGroupBox *grpSortC;
    QComboBox *cmbComputers;
    QRadioButton *rbAscC;
    QRadioButton *rbDescC;
    QPushButton *pbSortC;
    QGroupBox *groupBox_3;
    QWidget *tbConnect;
    QLabel *lblConnectSwithC;
    QLabel *lblInputS;
    QLineEdit *lineEdit_2;
    QLabel *lblInputC;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *lblConnectComputerScientist;
    QLabel *InputComputer2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_5;
    QLabel *InputScientist2;
    QLabel *lblComputern_no1;
    QLabel *lblScientist_connect;
    QLabel *lblScientistComputer;
    QLabel *lblComputer_no1;
    QLabel *lblScientist_no2;
    QLabel *lblComputer_no2;
    QLabel *lblComputerScientist;
    QLabel *lblScientist_no1;
    QWidget *tab;
    QColumnView *colFind;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QLabel *lblHeader;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuFind;
    QMenu *menuScientist;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 620);
        actionScientist = new QAction(MainWindow);
        actionScientist->setObjectName(QStringLiteral("actionScientist"));
        actionComputer = new QAction(MainWindow);
        actionComputer->setObjectName(QStringLiteral("actionComputer"));
        actionConnection = new QAction(MainWindow);
        actionConnection->setObjectName(QStringLiteral("actionConnection"));
        actionComputer_2 = new QAction(MainWindow);
        actionComputer_2->setObjectName(QStringLiteral("actionComputer_2"));
        actionConnection_2 = new QAction(MainWindow);
        actionConnection_2->setObjectName(QStringLiteral("actionConnection_2"));
        actionBy_name = new QAction(MainWindow);
        actionBy_name->setObjectName(QStringLiteral("actionBy_name"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tbFind = new QTabWidget(centralWidget);
        tbFind->setObjectName(QStringLiteral("tbFind"));
        tbFind->setGeometry(QRect(10, 0, 580, 561));
        tbFind->setDocumentMode(true);
        tbFind->setTabsClosable(false);
        tbScientist = new QWidget();
        tbScientist->setObjectName(QStringLiteral("tbScientist"));
        tbScientist->setFocusPolicy(Qt::TabFocus);
        lblDodS = new QLabel(tbScientist);
        lblDodS->setObjectName(QStringLiteral("lblDodS"));
        lblDodS->setGeometry(QRect(30, 100, 41, 16));
        lblNameS = new QLabel(tbScientist);
        lblNameS->setObjectName(QStringLiteral("lblNameS"));
        lblNameS->setGeometry(QRect(30, 40, 53, 16));
        lblDobS = new QLabel(tbScientist);
        lblDobS->setObjectName(QStringLiteral("lblDobS"));
        lblDobS->setGeometry(QRect(30, 70, 41, 16));
        edtNameS = new QLineEdit(tbScientist);
        edtNameS->setObjectName(QStringLiteral("edtNameS"));
        edtNameS->setGeometry(QRect(80, 40, 251, 22));
        colScientists = new QColumnView(tbScientist);
        colScientists->setObjectName(QStringLiteral("colScientists"));
        colScientists->setGeometry(QRect(20, 180, 561, 351));
        pbAddS = new QPushButton(tbScientist);
        pbAddS->setObjectName(QStringLiteral("pbAddS"));
        pbAddS->setGeometry(QRect(240, 130, 93, 28));
        grbSortS = new QGroupBox(tbScientist);
        grbSortS->setObjectName(QStringLiteral("grbSortS"));
        grbSortS->setGeometry(QRect(380, 10, 201, 161));
        cmbSortS = new QComboBox(grbSortS);
        cmbSortS->setObjectName(QStringLiteral("cmbSortS"));
        cmbSortS->setGeometry(QRect(10, 30, 181, 22));
        rbAscS = new QRadioButton(grbSortS);
        rbAscS->setObjectName(QStringLiteral("rbAscS"));
        rbAscS->setGeometry(QRect(10, 80, 95, 20));
        rbAscS->setChecked(true);
        rbDescS = new QRadioButton(grbSortS);
        rbDescS->setObjectName(QStringLiteral("rbDescS"));
        rbDescS->setGeometry(QRect(100, 80, 95, 20));
        pbSortS = new QPushButton(grbSortS);
        pbSortS->setObjectName(QStringLiteral("pbSortS"));
        pbSortS->setGeometry(QRect(100, 120, 93, 28));
        edtDobS = new QLineEdit(tbScientist);
        edtDobS->setObjectName(QStringLiteral("edtDobS"));
        edtDobS->setGeometry(QRect(80, 70, 80, 22));
        edtDodS = new QLineEdit(tbScientist);
        edtDodS->setObjectName(QStringLiteral("edtDodS"));
        edtDodS->setGeometry(QRect(80, 100, 80, 22));
        groupBox = new QGroupBox(tbScientist);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 351, 161));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        rbFemaleS = new QRadioButton(groupBox);
        rbFemaleS->setObjectName(QStringLiteral("rbFemaleS"));
        rbFemaleS->setGeometry(QRect(180, 60, 70, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        rbFemaleS->setFont(font1);
        rbFemaleS->setChecked(true);
        rbMaleS = new QRadioButton(groupBox);
        rbMaleS->setObjectName(QStringLiteral("rbMaleS"));
        rbMaleS->setGeometry(QRect(250, 60, 60, 20));
        rbMaleS->setFont(font1);
        rbBothS = new QRadioButton(groupBox);
        rbBothS->setObjectName(QStringLiteral("rbBothS"));
        rbBothS->setGeometry(QRect(180, 90, 70, 20));
        rbBothS->setFont(font1);
        tbFind->addTab(tbScientist, QString());
        groupBox->raise();
        lblDodS->raise();
        lblNameS->raise();
        lblDobS->raise();
        edtNameS->raise();
        colScientists->raise();
        pbAddS->raise();
        grbSortS->raise();
        edtDobS->raise();
        edtDodS->raise();
        tbComputers_2 = new QWidget();
        tbComputers_2->setObjectName(QStringLiteral("tbComputers_2"));
        lblBrand = new QLabel(tbComputers_2);
        lblBrand->setObjectName(QStringLiteral("lblBrand"));
        lblBrand->setGeometry(QRect(30, 40, 53, 16));
        edtBrand = new QLineEdit(tbComputers_2);
        edtBrand->setObjectName(QStringLiteral("edtBrand"));
        edtBrand->setGeometry(QRect(80, 40, 251, 22));
        lblType = new QLabel(tbComputers_2);
        lblType->setObjectName(QStringLiteral("lblType"));
        lblType->setGeometry(QRect(30, 70, 53, 16));
        edtYear = new QLineEdit(tbComputers_2);
        edtYear->setObjectName(QStringLiteral("edtYear"));
        edtYear->setGeometry(QRect(80, 100, 113, 22));
        edtType = new QLineEdit(tbComputers_2);
        edtType->setObjectName(QStringLiteral("edtType"));
        edtType->setGeometry(QRect(80, 70, 251, 22));
        checkBox_2 = new QCheckBox(tbComputers_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(250, 100, 81, 20));
        checkBox_2->setChecked(true);
        lblYear = new QLabel(tbComputers_2);
        lblYear->setObjectName(QStringLiteral("lblYear"));
        lblYear->setGeometry(QRect(30, 100, 53, 16));
        colComputers = new QColumnView(tbComputers_2);
        colComputers->setObjectName(QStringLiteral("colComputers"));
        colComputers->setGeometry(QRect(20, 180, 561, 351));
        pbAddC = new QPushButton(tbComputers_2);
        pbAddC->setObjectName(QStringLiteral("pbAddC"));
        pbAddC->setGeometry(QRect(240, 130, 93, 28));
        grpSortC = new QGroupBox(tbComputers_2);
        grpSortC->setObjectName(QStringLiteral("grpSortC"));
        grpSortC->setGeometry(QRect(380, 10, 201, 161));
        cmbComputers = new QComboBox(grpSortC);
        cmbComputers->setObjectName(QStringLiteral("cmbComputers"));
        cmbComputers->setGeometry(QRect(10, 30, 181, 22));
        rbAscC = new QRadioButton(grpSortC);
        rbAscC->setObjectName(QStringLiteral("rbAscC"));
        rbAscC->setGeometry(QRect(10, 80, 95, 20));
        rbAscC->setChecked(true);
        rbDescC = new QRadioButton(grpSortC);
        rbDescC->setObjectName(QStringLiteral("rbDescC"));
        rbDescC->setGeometry(QRect(100, 80, 95, 20));
        pbSortC = new QPushButton(grpSortC);
        pbSortC->setObjectName(QStringLiteral("pbSortC"));
        pbSortC->setGeometry(QRect(100, 120, 93, 28));
        groupBox_3 = new QGroupBox(tbComputers_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 10, 351, 161));
        groupBox_3->setFont(font);
        tbFind->addTab(tbComputers_2, QString());
        groupBox_3->raise();
        lblBrand->raise();
        edtBrand->raise();
        lblType->raise();
        edtYear->raise();
        edtType->raise();
        checkBox_2->raise();
        lblYear->raise();
        colComputers->raise();
        pbAddC->raise();
        grpSortC->raise();
        tbConnect = new QWidget();
        tbConnect->setObjectName(QStringLiteral("tbConnect"));
        lblConnectSwithC = new QLabel(tbConnect);
        lblConnectSwithC->setObjectName(QStringLiteral("lblConnectSwithC"));
        lblConnectSwithC->setGeometry(QRect(20, 20, 300, 20));
        lblConnectSwithC->setFont(font);
        lblInputS = new QLabel(tbConnect);
        lblInputS->setObjectName(QStringLiteral("lblInputS"));
        lblInputS->setGeometry(QRect(20, 60, 130, 16));
        lineEdit_2 = new QLineEdit(tbConnect);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 60, 113, 22));
        lblInputC = new QLabel(tbConnect);
        lblInputC->setObjectName(QStringLiteral("lblInputC"));
        lblInputC->setGeometry(QRect(20, 100, 130, 16));
        lineEdit_3 = new QLineEdit(tbConnect);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 100, 113, 22));
        pushButton_2 = new QPushButton(tbConnect);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 100, 93, 28));
        lblConnectComputerScientist = new QLabel(tbConnect);
        lblConnectComputerScientist->setObjectName(QStringLiteral("lblConnectComputerScientist"));
        lblConnectComputerScientist->setGeometry(QRect(20, 200, 300, 20));
        lblConnectComputerScientist->setFont(font);
        InputComputer2 = new QLabel(tbConnect);
        InputComputer2->setObjectName(QStringLiteral("InputComputer2"));
        InputComputer2->setGeometry(QRect(20, 240, 130, 16));
        lineEdit_4 = new QLineEdit(tbConnect);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 280, 113, 22));
        pushButton_3 = new QPushButton(tbConnect);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 280, 93, 28));
        lineEdit_5 = new QLineEdit(tbConnect);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 240, 113, 22));
        InputScientist2 = new QLabel(tbConnect);
        InputScientist2->setObjectName(QStringLiteral("InputScientist2"));
        InputScientist2->setGeometry(QRect(20, 280, 130, 16));
        lblComputern_no1 = new QLabel(tbConnect);
        lblComputern_no1->setObjectName(QStringLiteral("lblComputern_no1"));
        lblComputern_no1->setGeometry(QRect(270, 150, 111, 16));
        lblScientist_connect = new QLabel(tbConnect);
        lblScientist_connect->setObjectName(QStringLiteral("lblScientist_connect"));
        lblScientist_connect->setGeometry(QRect(240, 170, 21, 16));
        lblScientistComputer = new QLabel(tbConnect);
        lblScientistComputer->setObjectName(QStringLiteral("lblScientistComputer"));
        lblScientistComputer->setGeometry(QRect(20, 150, 221, 16));
        lblComputer_no1 = new QLabel(tbConnect);
        lblComputer_no1->setObjectName(QStringLiteral("lblComputer_no1"));
        lblComputer_no1->setGeometry(QRect(380, 150, 30, 16));
        lblScientist_no2 = new QLabel(tbConnect);
        lblScientist_no2->setObjectName(QStringLiteral("lblScientist_no2"));
        lblScientist_no2->setGeometry(QRect(380, 330, 30, 16));
        lblComputer_no2 = new QLabel(tbConnect);
        lblComputer_no2->setObjectName(QStringLiteral("lblComputer_no2"));
        lblComputer_no2->setGeometry(QRect(270, 330, 111, 16));
        lblComputerScientist = new QLabel(tbConnect);
        lblComputerScientist->setObjectName(QStringLiteral("lblComputerScientist"));
        lblComputerScientist->setGeometry(QRect(20, 330, 221, 16));
        lblScientist_no1 = new QLabel(tbConnect);
        lblScientist_no1->setObjectName(QStringLiteral("lblScientist_no1"));
        lblScientist_no1->setGeometry(QRect(240, 150, 30, 16));
        tbFind->addTab(tbConnect, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        colFind = new QColumnView(tab);
        colFind->setObjectName(QStringLiteral("colFind"));
        colFind->setGeometry(QRect(20, 180, 561, 351));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 80, 16));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 70, 300, 22));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 561, 141));
        lblHeader = new QLabel(groupBox_2);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        lblHeader->setGeometry(QRect(10, 10, 561, 16));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lblHeader->setFont(font2);
        lblHeader->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 100, 95, 20));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(220, 100, 95, 20));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 100, 93, 28));
        tbFind->addTab(tab, QString());
        groupBox_2->raise();
        colFind->raise();
        label->raise();
        lineEdit->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuFind = new QMenu(menuFile);
        menuFind->setObjectName(QStringLiteral("menuFind"));
        menuScientist = new QMenu(menuFind);
        menuScientist->setObjectName(QStringLiteral("menuScientist"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tbFind, edtNameS);
        QWidget::setTabOrder(edtNameS, edtDobS);
        QWidget::setTabOrder(edtDobS, edtDodS);
        QWidget::setTabOrder(edtDodS, rbFemaleS);
        QWidget::setTabOrder(rbFemaleS, rbMaleS);
        QWidget::setTabOrder(rbMaleS, rbBothS);
        QWidget::setTabOrder(rbBothS, pbAddS);
        QWidget::setTabOrder(pbAddS, cmbSortS);
        QWidget::setTabOrder(cmbSortS, rbAscS);
        QWidget::setTabOrder(rbAscS, rbDescS);
        QWidget::setTabOrder(rbDescS, pbSortS);
        QWidget::setTabOrder(pbSortS, colScientists);
        QWidget::setTabOrder(colScientists, edtBrand);
        QWidget::setTabOrder(edtBrand, edtType);
        QWidget::setTabOrder(edtType, edtYear);
        QWidget::setTabOrder(edtYear, checkBox_2);
        QWidget::setTabOrder(checkBox_2, pbAddC);
        QWidget::setTabOrder(pbAddC, cmbComputers);
        QWidget::setTabOrder(cmbComputers, rbAscC);
        QWidget::setTabOrder(rbAscC, rbDescC);
        QWidget::setTabOrder(rbDescC, colComputers);
        QWidget::setTabOrder(colComputers, pbSortC);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuFind->menuAction());
        menuNew->addAction(actionScientist);
        menuNew->addAction(actionComputer);
        menuNew->addAction(actionConnection);
        menuFind->addAction(menuScientist->menuAction());
        menuFind->addAction(actionComputer_2);
        menuScientist->addAction(actionBy_name);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tbFind->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SCIENTISTS & COMPUTERS", 0));
        actionScientist->setText(QApplication::translate("MainWindow", "Scientist", 0));
        actionComputer->setText(QApplication::translate("MainWindow", "Computer", 0));
        actionConnection->setText(QApplication::translate("MainWindow", "Connection", 0));
        actionComputer_2->setText(QApplication::translate("MainWindow", "Computer", 0));
        actionConnection_2->setText(QApplication::translate("MainWindow", "Connection", 0));
        actionBy_name->setText(QApplication::translate("MainWindow", "By name", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        lblDodS->setText(QApplication::translate("MainWindow", "Died:", 0));
        lblNameS->setText(QApplication::translate("MainWindow", "Name:", 0));
        lblDobS->setText(QApplication::translate("MainWindow", "Born:", 0));
        edtNameS->setInputMask(QString());
        pbAddS->setText(QApplication::translate("MainWindow", "Add", 0));
        grbSortS->setTitle(QApplication::translate("MainWindow", "Sort by", 0));
        cmbSortS->clear();
        cmbSortS->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Name", 0)
         << QApplication::translate("MainWindow", "Born", 0)
         << QApplication::translate("MainWindow", "Died", 0)
         << QApplication::translate("MainWindow", "Gender", 0)
        );
        rbAscS->setText(QApplication::translate("MainWindow", "Ascending", 0));
        rbDescS->setText(QApplication::translate("MainWindow", "Descending", 0));
        pbSortS->setText(QApplication::translate("MainWindow", "Sort", 0));
        edtDobS->setInputMask(QString());
        edtDodS->setInputMask(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Add a new Scientist", 0));
        rbFemaleS->setText(QApplication::translate("MainWindow", "Female", 0));
        rbMaleS->setText(QApplication::translate("MainWindow", "Male", 0));
        rbBothS->setText(QApplication::translate("MainWindow", "Both", 0));
        tbFind->setTabText(tbFind->indexOf(tbScientist), QApplication::translate("MainWindow", "Scientists", 0));
        lblBrand->setText(QApplication::translate("MainWindow", "Brand:", 0));
        lblType->setText(QApplication::translate("MainWindow", "Type:", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Built", 0));
        lblYear->setText(QApplication::translate("MainWindow", "Year:", 0));
        pbAddC->setText(QApplication::translate("MainWindow", "Add", 0));
        grpSortC->setTitle(QApplication::translate("MainWindow", "Sort by", 0));
        cmbComputers->clear();
        cmbComputers->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Brand", 0)
         << QApplication::translate("MainWindow", "Type", 0)
         << QApplication::translate("MainWindow", "Year", 0)
         << QApplication::translate("MainWindow", "Built", 0)
        );
        rbAscC->setText(QApplication::translate("MainWindow", "Ascending", 0));
        rbDescC->setText(QApplication::translate("MainWindow", "Descending", 0));
        pbSortC->setText(QApplication::translate("MainWindow", "Sort", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Add a new Computer", 0));
        tbFind->setTabText(tbFind->indexOf(tbComputers_2), QApplication::translate("MainWindow", "Computers", 0));
        lblConnectSwithC->setText(QApplication::translate("MainWindow", "Connect a Scientist with a Computer", 0));
        lblInputS->setText(QApplication::translate("MainWindow", "Input the Scientist ID:", 0));
        lblInputC->setText(QApplication::translate("MainWindow", "Input the Computer ID:", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Connect", 0));
        lblConnectComputerScientist->setText(QApplication::translate("MainWindow", "Connect a Computer with a Scientist", 0));
        InputComputer2->setText(QApplication::translate("MainWindow", "Input the Computer ID:", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Connect", 0));
        InputScientist2->setText(QApplication::translate("MainWindow", "Input the Scientist ID:", 0));
        lblComputern_no1->setText(QApplication::translate("MainWindow", "with Computer no: ", 0));
        lblScientist_connect->setText(QString());
        lblScientistComputer->setText(QApplication::translate("MainWindow", "You have now connected Scientist no: ", 0));
        lblComputer_no1->setText(QString());
        lblScientist_no2->setText(QString());
        lblComputer_no2->setText(QApplication::translate("MainWindow", "with Computer no: ", 0));
        lblComputerScientist->setText(QApplication::translate("MainWindow", "You have now connected Scientist no: ", 0));
        lblScientist_no1->setText(QString());
        tbFind->setTabText(tbFind->indexOf(tbConnect), QApplication::translate("MainWindow", "Connect", 0));
        label->setText(QApplication::translate("MainWindow", "Search term:", 0));
        groupBox_2->setTitle(QString());
        lblHeader->setText(QApplication::translate("MainWindow", "Find a Scientist or a Computer", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Scientist", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Computer", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Search", 0));
        tbFind->setTabText(tbFind->indexOf(tab), QApplication::translate("MainWindow", "Find", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0));
        menuFind->setTitle(QApplication::translate("MainWindow", "Find", 0));
        menuScientist->setTitle(QApplication::translate("MainWindow", "Scientist", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

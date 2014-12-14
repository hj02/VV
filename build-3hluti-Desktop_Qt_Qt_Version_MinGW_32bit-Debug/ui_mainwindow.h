/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
    QTabWidget *tbMenu;
    QWidget *tbScientist_2;
    QLabel *lblDodS;
    QLabel *lblNameS;
    QLabel *lblDobS;
    QLineEdit *txtNameS;
    QColumnView *colScientists;
    QPushButton *pbAddS;
    QPushButton *pbFindS;
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
    QPushButton *pbFindC;
    QGroupBox *grpSortC;
    QComboBox *cmbComputers;
    QRadioButton *rbAscC;
    QRadioButton *rbDescC;
    QPushButton *pbSortC;
    QWidget *tbConnect_2;
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
        MainWindow->resize(603, 621);
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
        tbMenu = new QTabWidget(centralWidget);
        tbMenu->setObjectName(QStringLiteral("tbMenu"));
        tbMenu->setGeometry(QRect(0, 0, 581, 561));
        tbMenu->setDocumentMode(true);
        tbMenu->setTabsClosable(false);
        tbScientist_2 = new QWidget();
        tbScientist_2->setObjectName(QStringLiteral("tbScientist_2"));
        tbScientist_2->setFocusPolicy(Qt::TabFocus);
        lblDodS = new QLabel(tbScientist_2);
        lblDodS->setObjectName(QStringLiteral("lblDodS"));
        lblDodS->setGeometry(QRect(30, 100, 41, 16));
        lblNameS = new QLabel(tbScientist_2);
        lblNameS->setObjectName(QStringLiteral("lblNameS"));
        lblNameS->setGeometry(QRect(30, 30, 53, 16));
        lblDobS = new QLabel(tbScientist_2);
        lblDobS->setObjectName(QStringLiteral("lblDobS"));
        lblDobS->setGeometry(QRect(30, 60, 41, 16));
        txtNameS = new QLineEdit(tbScientist_2);
        txtNameS->setObjectName(QStringLiteral("txtNameS"));
        txtNameS->setGeometry(QRect(80, 30, 251, 22));
        colScientists = new QColumnView(tbScientist_2);
        colScientists->setObjectName(QStringLiteral("colScientists"));
        colScientists->setGeometry(QRect(20, 181, 561, 351));
        pbAddS = new QPushButton(tbScientist_2);
        pbAddS->setObjectName(QStringLiteral("pbAddS"));
        pbAddS->setGeometry(QRect(40, 130, 93, 28));
        pbFindS = new QPushButton(tbScientist_2);
        pbFindS->setObjectName(QStringLiteral("pbFindS"));
        pbFindS->setGeometry(QRect(150, 130, 93, 28));
        grbSortS = new QGroupBox(tbScientist_2);
        grbSortS->setObjectName(QStringLiteral("grbSortS"));
        grbSortS->setGeometry(QRect(380, 10, 201, 161));
        cmbSortS = new QComboBox(grbSortS);
        cmbSortS->setObjectName(QStringLiteral("cmbSortS"));
        cmbSortS->setGeometry(QRect(10, 30, 131, 22));
        rbAscS = new QRadioButton(grbSortS);
        rbAscS->setObjectName(QStringLiteral("rbAscS"));
        rbAscS->setGeometry(QRect(10, 60, 95, 20));
        rbAscS->setChecked(true);
        rbDescS = new QRadioButton(grbSortS);
        rbDescS->setObjectName(QStringLiteral("rbDescS"));
        rbDescS->setGeometry(QRect(10, 90, 95, 20));
        pbSortS = new QPushButton(tbScientist_2);
        pbSortS->setObjectName(QStringLiteral("pbSortS"));
        pbSortS->setGeometry(QRect(260, 130, 93, 28));
        edtDobS = new QLineEdit(tbScientist_2);
        edtDobS->setObjectName(QStringLiteral("edtDobS"));
        edtDobS->setGeometry(QRect(80, 60, 80, 22));
        edtDodS = new QLineEdit(tbScientist_2);
        edtDodS->setObjectName(QStringLiteral("edtDodS"));
        edtDodS->setGeometry(QRect(80, 90, 80, 22));
        groupBox = new QGroupBox(tbScientist_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 351, 161));
        rbFemaleS = new QRadioButton(groupBox);
        rbFemaleS->setObjectName(QStringLiteral("rbFemaleS"));
        rbFemaleS->setGeometry(QRect(180, 50, 70, 20));
        rbFemaleS->setChecked(true);
        rbMaleS = new QRadioButton(groupBox);
        rbMaleS->setObjectName(QStringLiteral("rbMaleS"));
        rbMaleS->setGeometry(QRect(250, 50, 60, 20));
        rbBothS = new QRadioButton(groupBox);
        rbBothS->setObjectName(QStringLiteral("rbBothS"));
        rbBothS->setGeometry(QRect(180, 80, 70, 20));
        tbMenu->addTab(tbScientist_2, QString());
        groupBox->raise();
        lblDodS->raise();
        lblNameS->raise();
        lblDobS->raise();
        txtNameS->raise();
        colScientists->raise();
        pbAddS->raise();
        pbFindS->raise();
        grbSortS->raise();
        pbSortS->raise();
        edtDobS->raise();
        edtDodS->raise();
        tbComputers_2 = new QWidget();
        tbComputers_2->setObjectName(QStringLiteral("tbComputers_2"));
        lblBrand = new QLabel(tbComputers_2);
        lblBrand->setObjectName(QStringLiteral("lblBrand"));
        lblBrand->setGeometry(QRect(30, 30, 53, 16));
        edtBrand = new QLineEdit(tbComputers_2);
        edtBrand->setObjectName(QStringLiteral("edtBrand"));
        edtBrand->setGeometry(QRect(80, 30, 251, 22));
        lblType = new QLabel(tbComputers_2);
        lblType->setObjectName(QStringLiteral("lblType"));
        lblType->setGeometry(QRect(30, 60, 53, 16));
        edtYear = new QLineEdit(tbComputers_2);
        edtYear->setObjectName(QStringLiteral("edtYear"));
        edtYear->setGeometry(QRect(80, 90, 113, 22));
        edtType = new QLineEdit(tbComputers_2);
        edtType->setObjectName(QStringLiteral("edtType"));
        edtType->setGeometry(QRect(80, 60, 251, 22));
        checkBox_2 = new QCheckBox(tbComputers_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(250, 90, 81, 20));
        checkBox_2->setChecked(true);
        lblYear = new QLabel(tbComputers_2);
        lblYear->setObjectName(QStringLiteral("lblYear"));
        lblYear->setGeometry(QRect(30, 90, 53, 16));
        colComputers = new QColumnView(tbComputers_2);
        colComputers->setObjectName(QStringLiteral("colComputers"));
        colComputers->setGeometry(QRect(20, 180, 621, 351));
        pbAddC = new QPushButton(tbComputers_2);
        pbAddC->setObjectName(QStringLiteral("pbAddC"));
        pbAddC->setGeometry(QRect(20, 140, 93, 28));
        pbFindC = new QPushButton(tbComputers_2);
        pbFindC->setObjectName(QStringLiteral("pbFindC"));
        pbFindC->setGeometry(QRect(130, 140, 93, 28));
        grpSortC = new QGroupBox(tbComputers_2);
        grpSortC->setObjectName(QStringLiteral("grpSortC"));
        grpSortC->setGeometry(QRect(390, 30, 191, 131));
        cmbComputers = new QComboBox(grpSortC);
        cmbComputers->setObjectName(QStringLiteral("cmbComputers"));
        cmbComputers->setGeometry(QRect(20, 30, 131, 22));
        rbAscC = new QRadioButton(grpSortC);
        rbAscC->setObjectName(QStringLiteral("rbAscC"));
        rbAscC->setGeometry(QRect(20, 70, 95, 20));
        rbAscC->setChecked(true);
        rbDescC = new QRadioButton(grpSortC);
        rbDescC->setObjectName(QStringLiteral("rbDescC"));
        rbDescC->setGeometry(QRect(20, 100, 95, 20));
        pbSortC = new QPushButton(tbComputers_2);
        pbSortC->setObjectName(QStringLiteral("pbSortC"));
        pbSortC->setGeometry(QRect(240, 140, 93, 28));
        tbMenu->addTab(tbComputers_2, QString());
        tbConnect_2 = new QWidget();
        tbConnect_2->setObjectName(QStringLiteral("tbConnect_2"));
        tbMenu->addTab(tbConnect_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 26));
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
        QWidget::setTabOrder(tbMenu, txtNameS);
        QWidget::setTabOrder(txtNameS, edtDobS);
        QWidget::setTabOrder(edtDobS, edtDodS);
        QWidget::setTabOrder(edtDodS, rbFemaleS);
        QWidget::setTabOrder(rbFemaleS, rbMaleS);
        QWidget::setTabOrder(rbMaleS, rbBothS);
        QWidget::setTabOrder(rbBothS, pbAddS);
        QWidget::setTabOrder(pbAddS, pbFindS);
        QWidget::setTabOrder(pbFindS, cmbSortS);
        QWidget::setTabOrder(cmbSortS, rbAscS);
        QWidget::setTabOrder(rbAscS, rbDescS);
        QWidget::setTabOrder(rbDescS, pbSortS);
        QWidget::setTabOrder(pbSortS, colScientists);
        QWidget::setTabOrder(colScientists, edtBrand);
        QWidget::setTabOrder(edtBrand, edtType);
        QWidget::setTabOrder(edtType, edtYear);
        QWidget::setTabOrder(edtYear, checkBox_2);
        QWidget::setTabOrder(checkBox_2, pbAddC);
        QWidget::setTabOrder(pbAddC, pbFindC);
        QWidget::setTabOrder(pbFindC, cmbComputers);
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
        menuFind->addAction(actionConnection_2);
        menuScientist->addAction(actionBy_name);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tbMenu->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SCIENTISTS", 0));
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
        txtNameS->setInputMask(QString());
        pbAddS->setText(QApplication::translate("MainWindow", "Add", 0));
        pbFindS->setText(QApplication::translate("MainWindow", "Find", 0));
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
        groupBox->setTitle(QString());
        rbFemaleS->setText(QApplication::translate("MainWindow", "Female", 0));
        rbMaleS->setText(QApplication::translate("MainWindow", "Male", 0));
        rbBothS->setText(QApplication::translate("MainWindow", "Both", 0));
        tbMenu->setTabText(tbMenu->indexOf(tbScientist_2), QApplication::translate("MainWindow", "Scientists", 0));
        lblBrand->setText(QApplication::translate("MainWindow", "Brand:", 0));
        lblType->setText(QApplication::translate("MainWindow", "Type:", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Built", 0));
        lblYear->setText(QApplication::translate("MainWindow", "Year:", 0));
        pbAddC->setText(QApplication::translate("MainWindow", "Add", 0));
        pbFindC->setText(QApplication::translate("MainWindow", "Find", 0));
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
        tbMenu->setTabText(tbMenu->indexOf(tbComputers_2), QApplication::translate("MainWindow", "Computers", 0));
        tbMenu->setTabText(tbMenu->indexOf(tbConnect_2), QApplication::translate("MainWindow", "Connect", 0));
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

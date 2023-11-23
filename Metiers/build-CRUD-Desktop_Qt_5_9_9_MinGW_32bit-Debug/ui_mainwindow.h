/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *lesmethodes;
    QWidget *tab_20;
    QLabel *label_60;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QLineEdit *id;
    QLineEdit *duree;
    QLineEdit *remarque;
    QPushButton *ajouter;
    QLabel *label_64;
    QDateEdit *date;
    QLineEdit *idemp;
    QLineEdit *ident;
    QLineEdit *refmat;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_74;
    QComboBox *res;
    QLabel *label_71;
    QComboBox *type;
    QPushButton *ajouter_2;
    QWidget *tab_21;
    QLabel *label_65;
    QPushButton *supprimer;
    QComboBox *comboBoxAuditSupp;
    QPushButton *sms;
    QLabel *label_83;
    QComboBox *comboboxDate;
    QTableView *tableAffD;
    QPushButton *supprimer_2;
    QWidget *tab_22;
    QLabel *label_66;
    QPushButton *modifier;
    QLineEdit *dureeM;
    QLineEdit *remM;
    QLabel *label_67;
    QLineEdit *id_M;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QDateEdit *dateM;
    QComboBox *resM;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *label_78;
    QLineEdit *idemp_2;
    QLineEdit *ident_2;
    QLineEdit *refmat_2;
    QComboBox *typeM;
    QLabel *label_79;
    QWidget *tab;
    QPushButton *afficher;
    QTableView *tableAff;
    QLabel *mode_3;
    QComboBox *choix;
    QLabel *mode_4;
    QRadioButton *asc;
    QRadioButton *desc;
    QPushButton *pdf_bt;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_81;
    QLineEdit *rechercheaudit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_80;
    QLineEdit *typeaudit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_75;
    QLineEdit *idaudit;
    QWidget *tab_4;
    QFrame *Statistic;
    QPushButton *stat;
    QWidget *tab_2;
    QCalendarWidget *calendar;
    QPushButton *calendarBT;
    QComboBox *comboBoxCalendar;
    QLabel *label_82;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(251, 246, 164);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lesmethodes = new QTabWidget(centralwidget);
        lesmethodes->setObjectName(QStringLiteral("lesmethodes"));
        lesmethodes->setGeometry(QRect(0, 10, 1001, 551));
        lesmethodes->setStyleSheet(QLatin1String("QTabWidget:pane {\n"
"	background-color: rgb(251, 246, 164);\n"
"border: 1px solid gray;\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:rgb(0, 170, 255); \n"
"} \n"
"\n"
"QTabBar::tab {\n"
"  background:rgb(255, 0, 0); \n"
"  border: 1px rgb(0, 85, 255); \n"
"  padding: 15px;\n"
"} \n"
"\n"
"QTabBar::tab:selected { \n"
"  background: rgb(245, 245, 245); \n"
"  margin-bottom: -1px; \n"
"}\n"
"QTabWidget {  \n"
"    background-color:#0f2033;\n"
"    border-top: 2px solid #C2C7CB;  \n"
"} \n"
"QTabWidget::pane { /* The tab widget frame */  \n"
"    border-top: 3px solid #C2C7CB;  \n"
"} \n"
" /* Style the tab using the tab sub-control. Note that \n"
"    it reads QTabBar _not_ QTabWidget */  \n"
"QTabBar::tab {  \n"
"    background-color:#0f2033;\n"
"    border: 1px solid #4973b4;  \n"
"    min-width: 100px; \n"
"    min-height:22px;\n"
"    padding: 0px  2px; \n"
"    color: rgb(255, 255, 255);\n"
"    margin-left: 1px;\n"
"    font: 75 12pt \"NSimSun\";\n"
"}  "
                        "\n"
"  \n"
"QTabBar::tab:selected, QTabBar::tab:hover {  \n"
"    background-color:rgb(0, 0, 255);\n"
"    margin-top: 0px;\n"
"    \n"
"}  \n"
"  \n"
"\n"
"  \n"
"QTabBar::tab:!selected {  \n"
"    margin-top: 5px; /* make non-selected tabs look smaller */  \n"
"}  \n"
"\n"
""));
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        label_60 = new QLabel(tab_20);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(20, 20, 121, 20));
        label_60->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_61 = new QLabel(tab_20);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(20, 70, 141, 20));
        label_61->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_62 = new QLabel(tab_20);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(20, 130, 69, 20));
        label_62->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_63 = new QLabel(tab_20);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(20, 200, 121, 20));
        label_63->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        id = new QLineEdit(tab_20);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(220, 10, 181, 25));
        id->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        duree = new QLineEdit(tab_20);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(220, 130, 181, 25));
        duree->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        remarque = new QLineEdit(tab_20);
        remarque->setObjectName(QStringLiteral("remarque"));
        remarque->setGeometry(QRect(220, 200, 181, 25));
        remarque->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        ajouter = new QPushButton(tab_20);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(420, 380, 124, 23));
        ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        label_64 = new QLabel(tab_20);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(20, 260, 121, 20));
        label_64->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        date = new QDateEdit(tab_20);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(230, 70, 161, 21));
        date->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        idemp = new QLineEdit(tab_20);
        idemp->setObjectName(QStringLiteral("idemp"));
        idemp->setGeometry(QRect(710, 100, 181, 25));
        idemp->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        ident = new QLineEdit(tab_20);
        ident->setObjectName(QStringLiteral("ident"));
        ident->setGeometry(QRect(720, 190, 181, 25));
        ident->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        refmat = new QLineEdit(tab_20);
        refmat->setObjectName(QStringLiteral("refmat"));
        refmat->setGeometry(QRect(720, 290, 181, 25));
        refmat->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_72 = new QLabel(tab_20);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(550, 100, 121, 20));
        label_72->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_73 = new QLabel(tab_20);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(550, 190, 121, 20));
        label_73->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_74 = new QLabel(tab_20);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(550, 290, 121, 20));
        label_74->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        res = new QComboBox(tab_20);
        res->setObjectName(QStringLiteral("res"));
        res->setGeometry(QRect(220, 260, 181, 22));
        label_71 = new QLabel(tab_20);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(20, 340, 131, 20));
        label_71->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        type = new QComboBox(tab_20);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(220, 340, 181, 22));
        ajouter_2 = new QPushButton(tab_20);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(420, 430, 124, 23));
        ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        lesmethodes->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        label_65 = new QLabel(tab_21);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(70, 80, 261, 20));
        label_65->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        supprimer = new QPushButton(tab_21);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(190, 230, 124, 23));
        supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        comboBoxAuditSupp = new QComboBox(tab_21);
        comboBoxAuditSupp->setObjectName(QStringLiteral("comboBoxAuditSupp"));
        comboBoxAuditSupp->setGeometry(QRect(170, 150, 141, 22));
        sms = new QPushButton(tab_21);
        sms->setObjectName(QStringLiteral("sms"));
        sms->setGeometry(QRect(640, 220, 124, 23));
        sms->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        label_83 = new QLabel(tab_21);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(540, 70, 281, 41));
        label_83->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        comboboxDate = new QComboBox(tab_21);
        comboboxDate->setObjectName(QStringLiteral("comboboxDate"));
        comboboxDate->setGeometry(QRect(630, 140, 141, 22));
        tableAffD = new QTableView(tab_21);
        tableAffD->setObjectName(QStringLiteral("tableAffD"));
        tableAffD->setGeometry(QRect(460, 280, 501, 211));
        tableAffD->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        supprimer_2 = new QPushButton(tab_21);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(190, 290, 124, 23));
        supprimer_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        lesmethodes->addTab(tab_21, QString());
        tab_22 = new QWidget();
        tab_22->setObjectName(QStringLiteral("tab_22"));
        label_66 = new QLabel(tab_22);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(10, 20, 201, 20));
        label_66->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        modifier = new QPushButton(tab_22);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(450, 400, 124, 23));
        modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(135, 205, 209);\n"
"	background-color: rgb(249, 166, 134);\n"
"	background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        dureeM = new QLineEdit(tab_22);
        dureeM->setObjectName(QStringLiteral("dureeM"));
        dureeM->setGeometry(QRect(260, 120, 113, 25));
        dureeM->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        remM = new QLineEdit(tab_22);
        remM->setObjectName(QStringLiteral("remM"));
        remM->setGeometry(QRect(260, 180, 113, 25));
        remM->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_67 = new QLabel(tab_22);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(10, 70, 191, 20));
        label_67->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        id_M = new QLineEdit(tab_22);
        id_M->setObjectName(QStringLiteral("id_M"));
        id_M->setGeometry(QRect(260, 20, 113, 25));
        id_M->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_68 = new QLabel(tab_22);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(10, 180, 141, 20));
        label_68->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_69 = new QLabel(tab_22);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(10, 120, 69, 20));
        label_69->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_70 = new QLabel(tab_22);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(10, 240, 121, 20));
        label_70->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        dateM = new QDateEdit(tab_22);
        dateM->setObjectName(QStringLiteral("dateM"));
        dateM->setGeometry(QRect(260, 70, 110, 22));
        dateM->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        resM = new QComboBox(tab_22);
        resM->setObjectName(QStringLiteral("resM"));
        resM->setGeometry(QRect(240, 240, 181, 22));
        label_76 = new QLabel(tab_22);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setGeometry(QRect(590, 100, 121, 20));
        label_76->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_77 = new QLabel(tab_22);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(590, 190, 121, 20));
        label_77->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_78 = new QLabel(tab_22);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setGeometry(QRect(590, 290, 121, 20));
        label_78->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        idemp_2 = new QLineEdit(tab_22);
        idemp_2->setObjectName(QStringLiteral("idemp_2"));
        idemp_2->setGeometry(QRect(750, 90, 181, 25));
        idemp_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        ident_2 = new QLineEdit(tab_22);
        ident_2->setObjectName(QStringLiteral("ident_2"));
        ident_2->setGeometry(QRect(760, 190, 181, 25));
        ident_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        refmat_2 = new QLineEdit(tab_22);
        refmat_2->setObjectName(QStringLiteral("refmat_2"));
        refmat_2->setGeometry(QRect(750, 290, 181, 25));
        refmat_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        typeM = new QComboBox(tab_22);
        typeM->setObjectName(QStringLiteral("typeM"));
        typeM->setGeometry(QRect(240, 330, 181, 22));
        label_79 = new QLabel(tab_22);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setGeometry(QRect(10, 330, 131, 20));
        label_79->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        lesmethodes->addTab(tab_22, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        afficher = new QPushButton(tab);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(800, 490, 124, 23));
        afficher->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        tableAff = new QTableView(tab);
        tableAff->setObjectName(QStringLiteral("tableAff"));
        tableAff->setGeometry(QRect(10, 270, 961, 211));
        tableAff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mode_3 = new QLabel(tab);
        mode_3->setObjectName(QStringLiteral("mode_3"));
        mode_3->setGeometry(QRect(20, 20, 141, 20));
        mode_3->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        choix = new QComboBox(tab);
        choix->setObjectName(QStringLiteral("choix"));
        choix->setGeometry(QRect(230, 20, 73, 22));
        choix->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mode_4 = new QLabel(tab);
        mode_4->setObjectName(QStringLiteral("mode_4"));
        mode_4->setGeometry(QRect(50, 140, 131, 20));
        mode_4->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        asc = new QRadioButton(tab);
        asc->setObjectName(QStringLiteral("asc"));
        asc->setGeometry(QRect(220, 110, 97, 20));
        desc = new QRadioButton(tab);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setGeometry(QRect(220, 170, 97, 20));
        pdf_bt = new QPushButton(tab);
        pdf_bt->setObjectName(QStringLiteral("pdf_bt"));
        pdf_bt->setGeometry(QRect(560, 490, 184, 23));
        pdf_bt->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"	background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 180px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(440, 20, 481, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_81 = new QLabel(widget);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));

        verticalLayout->addWidget(label_81);

        rechercheaudit = new QLineEdit(widget);
        rechercheaudit->setObjectName(QStringLiteral("rechercheaudit"));

        verticalLayout->addWidget(rechercheaudit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_80 = new QLabel(widget);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));

        verticalLayout_2->addWidget(label_80);

        typeaudit = new QLineEdit(widget);
        typeaudit->setObjectName(QStringLiteral("typeaudit"));

        verticalLayout_2->addWidget(typeaudit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_75 = new QLabel(widget);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));

        verticalLayout_3->addWidget(label_75);

        idaudit = new QLineEdit(widget);
        idaudit->setObjectName(QStringLiteral("idaudit"));

        verticalLayout_3->addWidget(idaudit);


        horizontalLayout->addLayout(verticalLayout_3);

        lesmethodes->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        Statistic = new QFrame(tab_4);
        Statistic->setObjectName(QStringLiteral("Statistic"));
        Statistic->setGeometry(QRect(70, 60, 861, 371));
        Statistic->setFrameShape(QFrame::StyledPanel);
        Statistic->setFrameShadow(QFrame::Raised);
        stat = new QPushButton(tab_4);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(550, 460, 124, 23));
        stat->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"	background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        lesmethodes->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        calendar = new QCalendarWidget(tab_2);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setGeometry(QRect(40, 140, 781, 351));
        calendarBT = new QPushButton(tab_2);
        calendarBT->setObjectName(QStringLiteral("calendarBT"));
        calendarBT->setGeometry(QRect(860, 490, 124, 23));
        calendarBT->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"	background-color: rgb(170, 221, 102);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        comboBoxCalendar = new QComboBox(tab_2);
        comboBoxCalendar->setObjectName(QStringLiteral("comboBoxCalendar"));
        comboBoxCalendar->setGeometry(QRect(250, 20, 111, 22));
        label_82 = new QLabel(tab_2);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(90, 20, 131, 20));
        label_82->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        lesmethodes->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        lesmethodes->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "id d'audit ", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "Date d'audit", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "Dur\303\251e ", Q_NULLPTR));
        label_63->setText(QApplication::translate("MainWindow", "Remarque", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_64->setText(QApplication::translate("MainWindow", "Resultat", Q_NULLPTR));
        idemp->setText(QString());
        ident->setText(QString());
        refmat->setText(QString());
        label_72->setText(QApplication::translate("MainWindow", "idEmp", Q_NULLPTR));
        label_73->setText(QApplication::translate("MainWindow", "idEntreprise", Q_NULLPTR));
        label_74->setText(QApplication::translate("MainWindow", "RefMat", Q_NULLPTR));
        res->clear();
        res->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "effectue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "non effectue", Q_NULLPTR)
        );
        label_71->setText(QApplication::translate("MainWindow", "type d'audit", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "financier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "informatique", Q_NULLPTR)
         << QApplication::translate("MainWindow", "interne", Q_NULLPTR)
        );
        ajouter_2->setText(QApplication::translate("MainWindow", "recuperer", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab_20), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_65->setText(QApplication::translate("MainWindow", "           id d'audit", Q_NULLPTR));
        supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        sms->setText(QApplication::translate("MainWindow", "envoyer", Q_NULLPTR));
        label_83->setText(QApplication::translate("MainWindow", "           id d'audit Date", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("MainWindow", "recupere from file", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab_21), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_66->setText(QApplication::translate("MainWindow", "id d'audit ", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_67->setText(QApplication::translate("MainWindow", "Date d'audit", Q_NULLPTR));
        label_68->setText(QApplication::translate("MainWindow", "Remarque", Q_NULLPTR));
        label_69->setText(QApplication::translate("MainWindow", "Dur\303\251e ", Q_NULLPTR));
        label_70->setText(QApplication::translate("MainWindow", "Resultat", Q_NULLPTR));
        resM->clear();
        resM->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "effectu\303\251", Q_NULLPTR)
         << QApplication::translate("MainWindow", "non effectu\303\251", Q_NULLPTR)
        );
        label_76->setText(QApplication::translate("MainWindow", "idEmp", Q_NULLPTR));
        label_77->setText(QApplication::translate("MainWindow", "idEntreprise", Q_NULLPTR));
        label_78->setText(QApplication::translate("MainWindow", "RefMat", Q_NULLPTR));
        idemp_2->setText(QString());
        ident_2->setText(QString());
        refmat_2->setText(QString());
        typeM->clear();
        typeM->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "financier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "informatique", Q_NULLPTR)
         << QApplication::translate("MainWindow", "interne", Q_NULLPTR)
        );
        label_79->setText(QApplication::translate("MainWindow", "type d'audit", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab_22), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        afficher->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        mode_3->setText(QApplication::translate("MainWindow", "Tri Selon ..:", Q_NULLPTR));
        choix->clear();
        choix->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "date", Q_NULLPTR)
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "duree", Q_NULLPTR)
        );
        mode_4->setText(QApplication::translate("MainWindow", "Mode De Tri :", Q_NULLPTR));
        asc->setText(QApplication::translate("MainWindow", "ascendant", Q_NULLPTR));
        desc->setText(QApplication::translate("MainWindow", "descendant", Q_NULLPTR));
        pdf_bt->setText(QApplication::translate("MainWindow", "Generation PDF", Q_NULLPTR));
        label_81->setText(QApplication::translate("MainWindow", "resultat audit :", Q_NULLPTR));
        label_80->setText(QApplication::translate("MainWindow", "type audit :", Q_NULLPTR));
        label_75->setText(QApplication::translate("MainWindow", "id audit :", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab_4), QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        calendarBT->setText(QApplication::translate("MainWindow", "nvl date NE", Q_NULLPTR));
        label_82->setText(QApplication::translate("MainWindow", "id audit :", Q_NULLPTR));
        lesmethodes->setTabText(lesmethodes->indexOf(tab_2), QApplication::translate("MainWindow", "calendar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

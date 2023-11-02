#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "audit.h"
#include<QMessageBox>
#include<QIntValidator>
#include <QDebug>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->id->setValidator(new QIntValidator(0,99999999,this));

    QRegExp regex("[A-Za-z]+");
    ui->remarque->setValidator(new QRegExpValidator(regex, this));
    ui->resultat->setValidator(new QRegExpValidator(regex, this));

    ui->tableAff->setModel(A.afficherAudit());
    Audit D;
       ui->comboBoxAuditSupp->setModel(D.afficher_AuditCombobox());



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouter_clicked()
{
    int IdAudit = ui->id->text().toInt();
    int Duree=ui->date->text().toInt();
    QString DateAudit = ui->date->text();
 /*date=QDate::fromString(DateAudit,"dd/MM/yyyy");*/
    //QString DateAudit=ui->date->text();
    /*QDate Duree=ui->duree->text();*/
    QString Resultat=ui->resultat->text();
    QString Remarque=ui->remarque->text();
    Audit A2(IdAudit , QDate::fromString(DateAudit, "dd/MM/yyyy") ,Duree, Resultat,Remarque) ;
    bool test = A2.ajouterAudit();
   // Audit A(IdAudit,DateAudit,Duree,Resultat,Remarque);


    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectué\n"));
         ui->tableAff->setModel(A.afficherAudit());

    }
    else
    {
      QMessageBox::critical(nullptr, QObject::tr("not ok"),QObject::tr("Ajout non effectué \n"));

    }

}
void MainWindow::on_supprimer_clicked()
{


    Audit A1;
    //A1.setIdAudit(ui->S_id->text().toInt());
    //int IdAudit=ui->S_id->text().toInt();
    bool test=A1.supprimerAudit(  ui->comboBoxAuditSupp->currentText().toInt()); //la val selectionnée .
    if(test)
    {
         QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("suppression effectuée\n"));
          ui->tableAff->setModel(A.afficherAudit());  //lancer la methode afficher
          Audit D;
             ui->comboBoxAuditSupp->setModel(D.afficher_AuditCombobox());


    }
    else
    {
        QMessageBox::information(nullptr,QObject::tr("not ok"),QObject::tr("suppression non effectuée\n"));
    }

}



void MainWindow::on_afficher_clicked()
{

    //a verifier .
    int IdAudit = ui->id->text().toInt();
    /*QDate DateAudit=ui->date->text();
    QDate Duree=ui->duree->text();*/
    QString Resultat=ui->resultat->text();
    QString Remarque=ui->remarque->text();

 //   Audit A(IdAudit,DateAudit,Duree,Resultat,Remarque);

    bool test =A.ajouterAudit();

    if(test)
    {
        ui->tableAff->setModel(A.afficherAudit());
        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectué\n"));

    }
    else
    {
      QMessageBox::critical(nullptr, QObject::tr("not ok"),QObject::tr("Ajout non effectué \n"));

    }
}



void MainWindow::on_modifier_clicked()
{
    int IdAudit = ui->id->text().toInt();
    int Duree=ui->date->text().toInt();
    QString DateAudit = ui->dateM->text();
    QString Resultat=ui->resultat->text();
    QString Remarque=ui->remarque->text();
    Audit A3(IdAudit , QDate::fromString(DateAudit, "dd/MM/yyyy") ,Duree, Resultat,Remarque) ;
    bool test = A3.modifierAudit();

    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("modif effectué\n"));
         ui->tableAff->setModel(A.afficherAudit());

    }
    else
    {
      QMessageBox::critical(nullptr, QObject::tr("not ok"),QObject::tr("modif non effectué \n"));

    }

}


void MainWindow::on_recherche_clicked()
{

}

void MainWindow::on_tri_clicked()
{

}

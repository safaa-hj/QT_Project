#include "audit.h"
#include <QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
Audit::Audit()
{

}
Audit::Audit(int IdAudit , QDate DateAudit  , int Duree , QString Resultat , QString Remarque)
{
    this->IdAudit=IdAudit;
    //this->DateAudit=DateAudit;
    this->DateAudit= DateAudit ;
    this->Duree=Duree;
    this->Resultat=Resultat;
    this->Remarque=Remarque;
}


void Audit::setIdAudit(int id ){IdAudit = id ;}
void Audit::setDateAudit(QDate dateA){DateAudit = dateA;}
void Audit::setResultat(QString resultat){Resultat =resultat;}
void Audit::setRemarque(QString remarque){Remarque=remarque;}
void Audit::setDuree(int duree){Duree =duree;}

//////////////////////////////////////


bool Audit::ajouterAudit()
{
    QSqlQuery query ;

    QString Id = QString::number(IdAudit);
    QString duree = QString::number(Duree);
    /*QString DateAudit = QString::number(DateAudit);*/


    query.prepare("INSERT INTO Audit_ (Id_Audit,Date_Audit,Resultat,Remarque,DUREE) " "VALUES (:id,:date,:res,:rem,:duree)");

    query.bindValue(":id",Id);
    query.bindValue(":date",DateAudit);
    query.bindValue(":duree",Duree);
    query.bindValue(":res",Resultat);
    query.bindValue(":rem",Remarque);


    return query.exec();
}

//////////////////////////////////////

bool Audit::supprimerAudit(int IdAudit )
{
    QSqlQuery q;
    QString id =QString::number(IdAudit);
    q.prepare("DELETE FROM Audit_ WHERE Id_Audit=:id");
    q.bindValue(":id",id);
    return q.exec();

}

//////////////////////////////////////

QSqlQueryModel * Audit::afficherAudit()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("SELECT * FROM audit_"); //afficher le nom ds la table audit ds bd

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit")); // ajout des colonnes avec des noms specifiques / colonne d'indice 0...
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Duree"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Remarque"));

    return model ;
    //tableau de requete sql
}

//////////////////////////////////////

bool Audit::modifierAudit()
{
    QSqlQuery query ;

    QString Id = QString::number(IdAudit);
    QString duree = QString::number(Duree);
    /*QString DateAudit = QString::number(DateAudit);*/

    //query.prepare("UPDATE Audit_ SET Audit_ WHERE Id_Audit=:id");

    query.prepare("UPDATE Audit_ SET  DateAudit=:date , Resultat=:res , Remarque=:rem , Duree=:duree  WHERE Id_Audit=:id )");

    query.bindValue(":id",Id);
    query.bindValue(":date",DateAudit);
    query.bindValue(":duree",duree);
    query.bindValue(":res",Resultat);
    query.bindValue(":rem",Remarque);

    return query.exec();
}



//////////////////////////////////////

QSqlQueryModel * Audit::TrierAudit()

{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM Audit_ ORDER BY DateAudit");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Duree"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Remarque"));

    return model ;
}

//////////////////////////////////////

QSqlQueryModel * Audit::RechercherAudit()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    QSqlQuery query ;
    QString Id = QString::number(IdAudit);


    model->setQuery("SELECT * FROM Audit_ WHERE ID_AUDIT = :id");
    query.bindValue(":id",IdAudit);

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Duree"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Remarque"));

    return model ;
}

//////////////////////////////////////

QSqlQueryModel * Audit::StatAudit()
{

}

//////////////////////////////////////


void Audit::generationPdf()
{

}

//////////////////////////////////////

Audit::~Audit()
{

}

QSqlQueryModel * Audit::afficher_AuditCombobox()

{
QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT ID_AUDIT FROM audit_");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_AUDIT"));

    return model;

}

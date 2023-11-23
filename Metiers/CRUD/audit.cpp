#include "audit.h"
#include <QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
#include<QPdfWriter>
#include<QPainter>
#include <QPrinter>
#include<QCoreApplication>
#include<QTextCursor>
#include <QTextDocument>
#include <QSqlRecord>
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QValueAxis>
#include<QBarSeries>
#include<QPainter>
#include <QtCharts>
#include <QFile>
#include <QDebug>
#include <QSqlError>


Audit::Audit()
{
    IdAudit=0;
    Duree=0;
    Resultat=" ";
    Remarque=" ";
    //DateAudit = getDateAudit();
    typeAudit =" ";
    IDEMP=0;
    IDENT=0;
    REFMATERIEL=" ";

}
Audit::Audit(int IdAudit , QDate DateAudit  , int Duree , QString Resultat , QString Remarque , QString typeAudit ,int IDEMP , int IDENT , QString REFMATERIEL )
{
    this->IdAudit=IdAudit;
    //this->DateAudit=DateAudit;
    this->DateAudit= DateAudit ;
    this->Duree=Duree;
    this->Resultat=Resultat;
    this->Remarque=Remarque;
    this->typeAudit=typeAudit;

    this->IDEMP=IDEMP;
    this->IDENT=IDENT;
    this->REFMATERIEL=REFMATERIEL;
}


void Audit::setIdAudit(int id ){IdAudit = id ;}
void Audit::setDateAudit(QDate dateA){DateAudit = dateA;}
void Audit::setResultat(QString resultat){Resultat =resultat;}
void Audit::setRemarque(QString remarque){Remarque=remarque;}
void Audit::setDuree(int duree){Duree =duree;}
void Audit::setTypeAudit(QString typeA){typeAudit=typeA;}

void Audit::setIDEMP( int idemp){IDEMP =idemp;}
void Audit::setIDENT(int ident){IDENT =ident;}
void Audit::setREFMATERIEL(QString ref){REFMATERIEL =ref ;}

//////////////////////////////////////


bool Audit::ajouterAudit()
{
    QSqlQuery query ;

    QString Id = QString::number(IdAudit);
    QString duree = QString::number(Duree);
    //QString typeA = QString::number(typeAudit);
    /*QString DateAudit = QString::number(DateAudit);*/


    query.prepare("INSERT INTO Audit_ (Id_Audit,Date_Audit,Resultat,Remarque,DUREE , TYPEAUDIT, IDEMP , IDENTREPRISE , REFMATERIEL ) " "VALUES (:id,:date,:res,:rem,:duree,:type,:idemp,:ident,:ref)");

    query.bindValue(":id",Id);
    query.bindValue(":date",DateAudit);
    query.bindValue(":duree",Duree);
    query.bindValue(":res",Resultat);
    query.bindValue(":rem",Remarque);
    query.bindValue(":type",typeAudit);


    query.bindValue(":idemp", IDEMP );
    query.bindValue(":ident",  IDENT );
    query.bindValue(":ref", REFMATERIEL );


    return query.exec();
}

//////////////////////////////////////
QSqlQueryModel * Audit::RechercherAuditID(QString ID)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    QSqlQuery query ;
    model->setQuery("SELECT * FROM Audit_ WHERE ID_AUDIT like '%"+ID+"%'");

    return model;

}



bool Audit::supprimerAudit(int IdAudit )
{
    QSqlQuery q;
    QString id =QString::number(IdAudit);
    q.prepare("DELETE FROM Audit_ WHERE Id_Audit=:id");
    q.bindValue(":id",id);
    return q.exec();

}

//////////////////////////////////////

bool Audit::idDisponible(int IdAudit) {
    QSqlQuery query;
    query.prepare("SELECT Id_Audit FROM Audit_ WHERE Id_Audit = :id");
    query.bindValue(":id", IdAudit);

    if (query.exec() && query.next()) {

        return true;
    } else {

        return false;
    }
}

//////////////////////////////////////

QSqlQueryModel * Audit::afficherAudit()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("SELECT * FROM audit_");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Remarque"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Duree"));
    //model->setHeaderData(8,Qt::Horizontal,QObject::tr("typeAudit"));



    return model ;

}


/*
QSqlQueryModel * Audit::afficherAuditDate()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("SELECT DATE_AUDIT FROM Audit_ WHERE ID_AUDIT = :id");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("DateAudit"));
    return model ;

}*/



//////////////////////////////////////

bool Audit::modifierAudit()
{
    QSqlQuery query ;

    QString Id = QString::number(IdAudit);
    QString duree = QString::number(Duree);
    QString idemp = QString::number(IDEMP);
    QString ident = QString::number(IDENT);
    //QString typeA = QString::number(typeAudit);

    /*QString DateAudit = QString::number(DateAudit);*/

    //query.prepare("UPDATE Audit_ SET Audit_ WHERE Id_Audit=:id");

    query.prepare("UPDATE Audit_ set "
                  "DUREE = CASE WHEN :duree <> 0 THEN :duree ELSE DUREE END,"
                  "remarque = CASE WHEN :rem <> ' ' THEN :rem ELSE remarque END,"
                  "resultat = CASE WHEN :res <> ' ' THEN :res ELSE resultat END,"
                  "TYPEAUDIT = CASE WHEN :type <> ' ' THEN :type ELSE TYPEAUDIT END,"
                  "IDEMP = CASE WHEN :idemp <> 0 THEN :idemp ELSE IDEMP END,"
                  "IDENTREPRISE = CASE WHEN :ident <> 0 THEN :ident ELSE IDENTREPRISE END,"
                  "REFMATERIEL = CASE WHEN :ref <> ' ' THEN :ref ELSE REFMATERIEL END "
                  "WHERE Id_Audit= :id");

    /*
    query.prepare("UPDATE Audit_ "
                  "SET Date_Audit=:date , Resultat=:res , Remarque=:rem , Duree=:duree "
                  "WHERE Id_Audit=:id");*/



    query.bindValue(":id",IdAudit);
    query.bindValue(":date",DateAudit);
    //query.bindValue(":duree",duree);
    query.bindValue(":duree",Duree);

    query.bindValue(":res",Resultat);
    query.bindValue(":rem",Remarque);
    query.bindValue(":type",typeAudit);
    query.bindValue(":idemp",IDEMP );
    query.bindValue(":ident",IDENT );
    query.bindValue(":ref",REFMATERIEL);

   // qDebug()<<"IDEMP :"<<IDEMP;
    qDebug()<<"IdAudit :"<<IdAudit;
    qDebug()<<"Duree :"<<Duree;
    qDebug()<<"IDEMP :"<<IDEMP;
    qDebug()<<"IDENT :"<<IDENT;
qDebug()<<"type :"<<typeAudit;

if (!query.exec()) {
    qDebug() << "Error executing query:" << query.lastError().text();
    qDebug() << "IdAudit:" << IdAudit;
    qDebug() << "Duree:" << Duree;

    return false;
}

    return query.exec();
}

//////////////////////////////////////

QSqlQueryModel * Audit::TrierAuditAsc()

{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM Audit_ ORDER BY Date_Audit ASC");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Duree"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Remarque"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("typeAudit"));


    return model ;
}

//////////////////////////////////////

QSqlQueryModel * Audit::TrierAuditDesc()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM Audit_ ORDER BY Date_Audit DESC");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IdAudit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DateAudit"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Duree"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Resultat"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Remarque"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("typeAudit"));


    return model ;
}

//////////////////////////////////////



/*
////////////////////////////////////////////////////////

QSqlQueryModel * Audit::RechercherAuditType(QString type)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    QSqlQuery query ;


    model->setQuery("SELECT * FROM Audit_ WHERE TYPEAUDIT like '%"+type+"%'");


    return model ;

}

//////////////////////////////////////


QSqlQueryModel * Audit::RechercherAuditRes(QString res)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    QSqlQuery query ;


    model->setQuery("SELECT * FROM Audit_ WHERE RESULTAT like '%"+res+"%'");


    return model ;

}*/

//////////////////////////////////////


bool Audit::generationPdf(QPrinter &printer)
{

    QTextDocument document;
    QTextCursor cursor(&document);
    QSqlQuery query("SELECT * FROM Audit_");
    while (query.next())
    {

        QString IdAudit = query.value(0).toString();
        QString DateAudit = query.value(1).toString();
        QString Resultat = query.value(2).toString();
        QString Remarque= query.value(3).toString();
        QString Duree = query.value(4).toString();
        QString typeAudit = query.value(5).toString();



        cursor.insertText("L'id d'audit est : " + IdAudit);
        cursor.insertBlock();
        cursor.insertText("La date d'audit est : " + DateAudit);
        cursor.insertBlock();
        cursor.insertText("Le resultat est : " + Resultat );
        cursor.insertBlock();
        cursor.insertText(" remarque : " + Remarque);
        cursor.insertBlock();
        cursor.insertText(" duree : " + Duree);
        cursor.insertBlock();
        cursor.insertText(" typeA : " + typeAudit);
        cursor.insertBlock();

        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
    }


    if (document.isEmpty()) {
        qDebug() << "Le document est vide. Aucune donnée à enregistrer dans le PDF.";
        return false;
    }
 else {
          document.print(&printer);
        qDebug() << "l'impression du document PDF est faite.";
        return true;
    }
}


//////////////////////////////////////
int Audit::countResultat(QString resultat)
{
    QSqlQuery query;

        query.prepare("SELECT COUNT(*) FROM Audit_ where resultat = :res ");
        query.bindValue(":res", resultat);

        query.exec();
        query.next();
        qDebug()<<"Resultat effe/non :"<< resultat ;
        return query.value(0).toInt();
}

/*QtCharts::QChartView* Audit::statistiqueAudit()
{
    QSqlQuery query("SELECT id_audit,  SUM(resultat) FROM Audit_ GROUP BY id_audit");
    QBarSet *barSet = new QBarSet("resultat de Audit par id ");
    QBarSeries *series = new QBarSeries;

    while (query.next()) {
        QString IdAudit = query.value(0).toString();
         double Resultat = query.value(1).toDouble();
         // Création d'un ensemble de barres avec le résultat
         QBarSet *barSet = new QBarSet("id_Audit " + IdAudit);
                 *barSet << Resultat;
         // Ajout de l'ensemble à la série
                 series->append(barSet);
    }

    QChart *chart = new QChart;
    series->append(barSet);
    chart->addSeries(series);
    chart->setTitle("Statistiques des audits selon l'id de l'audit ");

    // Axes X et Y
    QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
    axisX->setTitleText("id de l'audit ");
    axisX->append("id : ");
    axisX->append("id : ");
    chart->setAxisX(axisX, series);


    QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
    axisY->setTitleText("Resultat");
    axisY->setRange(0, 100);
    chart->setAxisY(axisY, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView;
}
*/
//////////////////////////////////////

Audit::~Audit()
{

}

/////////////////////////////////////////// Lesz comboBox

QSqlQueryModel * Audit::afficher_AuditCombobox()

{

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT ID_AUDIT FROM audit_");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_AUDIT"));

    return model;

}

/////////////////////////////////////////

QSqlQueryModel * Audit::afficher_ResultatCombobox()
{
    QSqlQueryModel * model = new QSqlQueryModel();

       model->setQuery("SELECT 'effectué' UNION SELECT 'non effectué' FROM audit_");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Resultat"));

       return model;
}

//////////////////////////////////////////

QSqlQueryModel * Audit::afficher_ResultatCombobox2()
{
    QSqlQueryModel * model = new QSqlQueryModel();

       model->setQuery("SELECT 'effectué' UNION SELECT 'non effectué' FROM audit_");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Resultat"));

       return model;
}

//////////////////////////////////////////


QSqlQueryModel * Audit::afficher_typeCombobox()
{
    QSqlQueryModel * model = new QSqlQueryModel();

       model->setQuery("SELECT 'financier' UNION SELECT 'interne' UNION SELECT 'informatique' FROM audit_");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("typeAudit"));

       return model;
}

//////////////////////////////////////////

QSqlQueryModel * Audit::afficher_typeCombobox2()
{
    QSqlQueryModel * model = new QSqlQueryModel();

       model->setQuery("SELECT 'financier' UNION SELECT 'interne' UNION SELECT 'informatique' FROM audit_");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("typeAudit"));

       return model;
}

//////////////////////////////////////////


QSqlQueryModel * Audit::afficher_idCombobox()

{

QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query ;

//model->setQuery("SELECT * FROM audit_ WHERE ID_AUDIT =:id");
model->setQuery("SELECT ID_AUDIT from Audit_");
query.bindValue(":id",IdAudit);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_AUDIT"));

    return model;

}


//////////////////////////////////////////


/*
QSqlQueryModel * Audit::afficher_TCombobox2()

{

QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query ;


//model->setQuery("SELECT * FROM audit_ WHERE TYPEAUDIT =:type");
model->setQuery("SELECT TYPEAUDIT from Audit_");
query.bindValue(":type",typeAudit);


model->setHeaderData(0, Qt::Horizontal, QObject::tr("TYPEAUDIT"));

    return model;

}


//////////////////////////////////////////

*/
QSqlQueryModel * Audit::afficher_ComboboxCalender()

{

QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query ;

model->setQuery("SELECT ID_AUDIT from Audit_");
query.bindValue(":res",Resultat);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_AUDIT"));

    return model;

}

/*
QSqlQueryModel * Audit::afficher_AuditComboboxD()

{

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT ID_AUDIT FROM audit_");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_AUDIT"));

    return model;

}*/

#ifndef AUDIT_H
#define AUDIT_H
#include <QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include<QChartView>



class Audit
{
public:
    Audit();
    Audit(int , QDate , int , QString , QString , QString ,int , int , QString );
    ~Audit();
////////////////////
    int getIdAudit(){return IdAudit;}
    QDate getDateAudit(){return DateAudit;}
    QString getResultat(){return Resultat;}
    QString getRemarque(){return Remarque;}
    int getDuree(){return Duree;}
    QString getTypeAudit (){return typeAudit ;}

    int getIDEMP(){return IDEMP ;}
    int getIDENT(){return IDENT ;}
    QString getREFMATERIEL(){return REFMATERIEL ;}
//////////////////////
    void setIdAudit(int id );
    void setDateAudit(QDate dateA);
    void setResultat(QString resultat);
    void setRemarque(QString remarque);
    void setDuree(int duree);
    void setTypeAudit( QString typeA);

    void setIDEMP( int idemp);
    void setIDENT(int ident);
    void setREFMATERIEL(QString ref);
//////////////////////
    bool ajouterAudit();
    bool supprimerAudit(int IdAudit);
    bool idDisponible(int IdAudit);
    QSqlQueryModel * afficherAudit();
    QSqlQueryModel * afficher_AuditCombobox();
    //QSqlQueryModel * afficherAuditDate();
    QSqlQueryModel * afficher_ResultatCombobox2();
    bool modifierAudit();

    ////////////// Metiers

    bool generationPdf(QPrinter &printer);
    QSqlQueryModel * TrierAuditAsc();
    QSqlQueryModel * TrierAuditDesc();
    //QSqlQueryModel * RechercherAuditType(QString type);
    QSqlQueryModel * RechercherAuditID(QString ID);
    QtCharts::QChartView * statistiqueAudit();
   // QSqlQueryModel * RechercherAuditRes(QString res);


    QSqlQueryModel * afficher_typeCombobox2();
    QSqlQueryModel * afficher_typeCombobox();
    //QSqlQueryModel * afficher_rechercheCombobox();
    QSqlQueryModel * afficher_ResultatCombobox();
    QSqlQueryModel * afficher_idCombobox();
    QSqlQueryModel * afficher_ComboboxCalender();
    QSqlQueryModel * afficher_AuditComboboxD();

    static int countResultat(QString resultat);

    private:
        int IdAudit;
        QDate DateAudit;
        QString Resultat ;
        QString Remarque;
        int Duree;
        QString typeAudit ;
        ///
        int IDEMP;
        int IDENT;
        QString REFMATERIEL;

};

#endif // AUDIT_H

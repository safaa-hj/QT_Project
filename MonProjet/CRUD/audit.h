#ifndef AUDIT_H
#define AUDIT_H
#include <QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>


class Audit
{
public:
    Audit();
    Audit(int , QDate , int , QString , QString);
    ~Audit();
//getters
    int getIdAudit(){return IdAudit;}
    QDate getDateAudit(){return DateAudit;}
    QString getResultat(){return Resultat;}
    QString getRemarque(){return Remarque;}
    int getDuree(){return Duree;}
//setters
    void setIdAudit(int id );
    void setDateAudit(QDate dateA);
    void setResultat(QString resultat);
    void setRemarque(QString remarque);
    void setDuree(int duree);
//les fonctions
    bool ajouterAudit();
    bool supprimerAudit(int IdAudit);
    bool modifierAudit();
    void generationPdf();
    QSqlQueryModel * TrierAudit();
    QSqlQueryModel * RechercherAudit();
    QSqlQueryModel * StatAudit();
    //float stat();
    QSqlQueryModel * afficherAudit();
    QSqlQueryModel * afficher_AuditCombobox();


    private:
        int IdAudit;
        QDate DateAudit;
        QString Resultat ;
        QString Remarque;
        int Duree;

};

#endif // AUDIT_H

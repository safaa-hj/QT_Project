#include "connection.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
Connection::Connection()
{

}

bool Connection::createConnection()
{
    bool test = false ;

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");//Projet2A
    db.setUserName("safa");
    db.setPassword("Safahajji123");

    if(db.open())
    {test = true ;
    }
    else         qDebug() << "Database error: " << db.lastError().text();


    return test ;
}
/*
void Connection::fermerConnection()
{
    QSqlDatabase db.close();
}*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "audit.h"
#include<QMessageBox>
#include<QIntValidator>
#include <QDebug>
#include <QSqlError>
#include<QSqlQueryModel>
#include<QFileDialog>
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QValueAxis>
#include<QBarSeries>
#include <QBarSet>
#include <QtCharts>
#include <QChartView>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QCalendarWidget>
#include <QTextCharFormat>
#include "sms.h"
#include<QStringList>
#include <QSqlRecord>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->id->setValidator(new QIntValidator(0,99999999,this));
    ui->duree->setValidator(new QIntValidator(0,99999999,this));
    ui->id_M->setValidator(new QIntValidator(0,99999999,this));
    ui->dureeM->setValidator(new QIntValidator(0,99999999,this));
    ui->idemp->setValidator(new QIntValidator(0,99999999,this));
    ui->ident->setValidator(new QIntValidator(0,99999999,this));
    ui->idemp_2->setValidator(new QIntValidator(0,99999999,this));
    ui->ident_2->setValidator(new QIntValidator(0,99999999,this));

    QRegExp regex("[A-Za-z]+");
    ui->remarque->setValidator(new QRegExpValidator(regex, this));
    ui->refmat->setValidator(new QRegExpValidator(regex, this));
    ui->refmat_2->setValidator(new QRegExpValidator(regex, this));
    //ui->resultat->setValidator(new QRegExpValidator(regex, this));
    ui->remM->setValidator(new QRegExpValidator(regex, this));
    ui->resM->setValidator(new QRegExpValidator(regex, this));

    ui->tableAff->setModel(A.afficherAudit());
    Audit D;
       ui->comboBoxAuditSupp->setModel(D.afficher_AuditCombobox());

           ui->tableAff->setModel(A.afficherAudit());

         // ui->comboboxDate->setModel(D.afficher_AuditComboboxD());

            /*ui->choix2->setModel(D.afficher_TCombobox2());
            ui->tableAff->setModel(A.afficherAudit());*/

            ui->comboBoxCalendar->setModel(D.afficher_ComboboxCalender());
            //ui->tableAff->setModel(A.afficherAudit());

    //ui->verticalLayout->addWidget(A.statistiqueAudit());
           /* QString accountSid = "AC63c365e7e85cb270027a7087e30d3523";
                        QString authToken = "36f39d8e8b5f4b7c45e0caed76de9f66";
                        QString twilioPhoneNumber = "+13342928344";
                        Sms sms;
                        sms.setTwilioCredentials(accountSid, authToken, twilioPhoneNumber);*/


}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_sms_clicked()
{
    /*Sms sms;
    Audit D;

    QString to = "+21690321004";
    QString message = "Hello, this is a test message.";
    QDate dateAudit = D.getDateAudit();
    sms.sendSms(to, message, dateAudit );
    ui->comboboxDate->currentText().toInt();
    ui->comboboxDate->setModel(D.afficher_AuditComboboxD());*/
/*
    Sms sms;
        Audit D;
        QSqlQueryModel * model=new QSqlQueryModel();

        QString to = "+21690321004";
        QString message = "Hello, this is a test message.";
        QDate dateAudit = D.getDateAudit();
        ui->comboboxDate->clear();
        ui->comboboxDate->currentText().toInt();
        sms.sendSms(to, message, dateAudit);

        int id = ui->comboboxDate->currentText().toInt();
        QSqlQuery query;
        /*query.prepare("SELECT DATE_AUDIT FROM Audit_ WHERE ID_AUDIT = :id");
        query.bindValue(":id", id);
        if (query.exec() && query.next()) {

             QDate dateAudit = query.value(0).toDate();

        }
        ui->tableAffD->setModel(D.afficherAudit());*/


void MainWindow::on_ajouter_clicked()
{
    //Audit A;
    int IdAudit = ui->id->text().toInt();
    int Duree=ui->duree->text().toInt();
    QString DateAudit = ui->date->text();
    QString Remarque=ui->remarque->text();

    int IDEMP = ui->idemp->text().toInt();
    int IDENT = ui->ident->text().toInt();
    QString REFMATERIEL = ui->refmat->text();


 /*date=QDate::fromString(DateAudit,"dd/MM/yyyy");*/
    //QString DateAudit=ui->date->text();
    /*QDate Duree=ui->duree->text();*/

    QString Resultat=ui->res->currentText();

    QString typeAudit=ui->type->currentText();
/*
    QComboBox *res = new QComboBox;
    ui->res->setModel(A.afficher_ResultatCombobox());*/


    Audit A2(IdAudit , QDate::fromString(DateAudit, "dd/MM/yyyy") ,Duree, Resultat, Remarque , typeAudit, IDEMP ,  IDENT ,  REFMATERIEL) ;
    bool test = A2.ajouterAudit();


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
    // Get the ID of the selected audit from the combo box
    int auditID = ui->comboBoxAuditSupp->currentText().toInt();

    // Retrieve information about the audit from the database
    QSqlQueryModel *model = A.RechercherAuditID(QString::number(auditID));
    QString auditDataToDelete;

    // Check if the audit information is available
    if (model->rowCount() > 0) {
        // Format the audit information into a string
        auditDataToDelete = QString("%1 | %2 | %3 | %4 | %5 | %6 | %7 | %8 | %9")
                                .arg(model->record(0).value("ID_AUDIT").toString())
                                .arg(model->record(0).value("Date_Audit").toString())
                                .arg(model->record(0).value("Resultat").toString())
                                .arg(model->record(0).value("Remarque").toString())
                                .arg(model->record(0).value("DUREE").toString())
                                .arg(model->record(0).value("TYPEAUDIT").toString())
                                .arg(model->record(0).value("IDEMP").toString())
                                .arg(model->record(0).value("IDENTREPRISE").toString())
                                .arg(model->record(0).value("REFMATERIEL").toString());
    }

    // Create or open the file for backup
    QFile file("audit_backup.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // Display an error message if the file cannot be opened
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Could not open backup file"));
        return;
    }

    QTextStream out(&file);

    // Move the file cursor to the end
    if (file.seek(file.size())) {
        // Append the required line to the end of the file
        out << auditDataToDelete << endl;
    } else {
        // Display an error message if the file cursor cannot be moved to the end
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Could not move file cursor to the end"));
    }

    file.close();

    // Continue with the rest of the function...

    // Remove the selected audit from the database
    bool test = A.supprimerAudit(auditID);

    // Display a message based on the success of the database operation
    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"));

        // Update the displayed table with the remaining audits
        ui->tableAff->setModel(A.afficherAudit());

        // Update the combo box with the remaining audits
        Audit D;
        ui->comboBoxAuditSupp->setModel(D.afficher_AuditCombobox());

        // Use QTimer to open the file after a short delay
        QTimer::singleShot(500, this, [this]() {
            QDesktopServices::openUrl(QUrl::fromLocalFile("audit_backup.txt"));
        });
    } else {
        QMessageBox::information(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"));
    }
}



void MainWindow::on_afficher_clicked()
{
    Audit D;
    QComboBox *res = new QComboBox;
    res->setModel(D.afficher_ResultatCombobox());

    QString t1 =ui->res->currentText();
    QComboBox *type = new QComboBox;

    type->setModel(D.afficher_typeCombobox());

    QString t2 =ui->type->currentText();
    QString Remarque=ui->remarque->text();
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
    int IdAudit = ui->id_M->text().toInt();
    int Duree=ui->dureeM->text().toInt();
    QString DateAudit = ui->dateM->text();
    //QString Resultat=ui->resM->text();
    QString Remarque=ui->remM->text();

    QString typeAudit = ui->typeM->currentText();

    QString Resultat=ui->resM->currentText();


    int IDEMP = ui->idemp_2->text().toInt();
    int IDENT = ui->ident_2->text().toInt();
    QString REFMATERIEL = ui->refmat_2->text();

    Audit A3(IdAudit , QDate::fromString(DateAudit, "dd/MM/yyyy") ,  Duree ,  Resultat ,  Remarque ,  typeAudit , IDEMP ,  IDENT ,  REFMATERIEL) ;
    bool test = A3.modifierAudit();

    qDebug()<<"IDEMP :"<<IDEMP;
    qDebug()<<"IDENT :"<<IDENT;
    qDebug()<<"REFMATERIEL :"<<REFMATERIEL;


    if(A3.idDisponible(A3.getIdAudit()))
    {


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
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("not ok"),QObject::tr("id non disponible \n"));
    }


//qDebug()<<"type :"<<typeAudit;
}





void MainWindow::on_asc_clicked()
{
    Audit A;
       QString t=ui->choix->currentText();
       QSqlQueryModel * model=new QSqlQueryModel();
      if(t == "date")
      {

         model = A.TrierAuditAsc();
      }
      else
      {
          if(t=="duree")
          {
               model->setQuery("SELECT * FROM Audit_ ORDER BY Duree ASC");
          }

          if (t =="id")
          {
              model->setQuery("SELECT * FROM Audit_ ORDER BY Id_Audit ASC");
          }
      }

       ui->tableAff->setModel(model);
}

void MainWindow::on_desc_clicked()
{
    Audit A;
    QString t=ui->choix->currentText();
    QSqlQueryModel * model=new QSqlQueryModel();
    if(t=="date")
    {

        //model->setQuery("SELECT * FROM Audit_ ORDER BY Date_Audit DESC");
        model = A.TrierAuditDesc();
    }
    else
       {
           if(t=="duree")
           {
                model->setQuery("SELECT * FROM Audit_ ORDER BY Duree DESC");
           }
           if (t=="id")
           {
               model->setQuery("SELECT * FROM Audit_ ORDER BY Id_Audit DESC");
           }
       }
     ui->tableAff->setModel(model);

}

void MainWindow::on_pdf_bt_clicked()
{
    Audit A;
    QString fileName = QFileDialog::getSaveFileName(this, "Save document", qApp->applicationDirPath(), "*.pdf");

          if (!fileName.isEmpty()) {

                 QPrinter printer;

                  printer.setOutputFormat(QPrinter::PdfFormat);

                  printer.setOutputFileName(fileName);

                  QMargins pageMargins(20, 20, 20, 20);



      #if QT_VERSION < QT_VERSION_CHECK(5, 3, 0)

          printer.setFullPage(false);

          printer.setPaperSize(QPrinter::A4);

          printer.setOrientation(QPrinter::Portrait);

          printer.setPageMargins(pageMargins.left(), pageMargins.top(), pageMargins.right(), pageMargins.bottom(), QPrinter::Millimeter);

      #else

          QPageLayout pageLayout;

          pageLayout.setMode(QPageLayout::StandardMode);

          pageLayout.setOrientation(QPageLayout::Portrait);

          pageLayout.setPageSize(QPageSize(QPageSize::A4));

          pageLayout.setUnits(QPageLayout::Millimeter);

          pageLayout.setMargins(QMarginsF(pageMargins));

          printer.setPageLayout(pageLayout);

      #endif

                  A.generationPdf(printer);


              }
}


void MainWindow::on_stat_clicked()
{
        int effCount = Audit::countResultat("effectue");
        int NeffCount = Audit::countResultat("non effectue");
    qDebug()<< "effCount"<< effCount;
    qDebug()<< "NeffCount"<< NeffCount;
        QBarSet *set0 = new QBarSet("effectuer Count");
        *set0 << effCount << NeffCount;

        QColor color(0x55aa00);
        set0->setColor(color);

        QBarSeries *series = new QBarSeries();
        series->append(set0);

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Resultat Type Count");
        chart->setAnimationOptions(QChart::SeriesAnimations);

        QStringList categories;
        categories << "Effectuer" << "Non Effectuer";
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        QChartView *chartView = new QChartView(chart);

        chartView->setMinimumWidth(861);
        chartView->setMinimumHeight(371);
        chartView->setParent(ui->Statistic);
        chart->legend()->setAlignment(Qt::AlignBottom);
        chartView->show();
}





void MainWindow::on_calendarBT_clicked()
{
    int id = ui->comboBoxCalendar->currentText().toInt();
    QDate date ;
    QString remarque ;
    QString resultat;
        QSqlQuery query;
        query.prepare("SELECT DATE_AUDIT,REMARQUE,RESULTAT FROM Audit_ WHERE ID_AUDIT = :id");
        query.bindValue(":id", id);
        if (query.exec() && query.next()) {

             date = query.value(0).toDate();
             remarque = query.value(1).toString();
             resultat = query.value(2).toString();
        }

        qDebug()<< "date :" <<date;
        qDebug()<< "remarque :"<<remarque;
        qDebug()<< "resultat :"<<resultat;

        QCalendarWidget* calendar = ui->calendar;
        //calendar->clear();
       // calendar->setSelectedDate(QDate::currentDate());

        calendar->setSelectedDate(date);

        if (resultat == "non effectue" || remarque == "bad")
        {
            QDate nextAuditDate = date.addDays(15);
            QTextCharFormat format;
            format.setBackground(Qt::red);
            calendar->setDateTextFormat(nextAuditDate, format);
            //setCalendarDateColor(calendar, nextAuditDate, Qt::red);

            qDebug() << "Next audit date set after 15 days.";
        }

        QTextCharFormat format;
        format.setBackground(Qt::green);
        calendar->setDateTextFormat(date, format);
        //setCalendarDateColor(calendar, originalAuditDate, Qt::green);
}
/*
void MainWindow::setCalendarDateColor(QCalendarWidget* calendar, const QDate& date, const QColor& color)
{
    QTextCharFormat format;
    format.setBackground(color);
    calendar->setDateTextFormat(date, format);
}*/



void MainWindow::on_ajouter_2_clicked()
{
    QFile file("audit_backup.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Could not open backup file for reading"));
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();

        // Split the line into individual values
        QStringList values = line.split(" | ");

        // Assuming the order of values is the same as in your database
        int IdAudit = values[0].toInt();
        QDate DateAudit = QDate::fromString(values[1], "dd/MM/yyyy");

        QString Resultat = values[2];
        QString Remarque = values[3];
        int Duree = values[4].toInt();
        QString typeAudit = values[5];
        int IDEMP = values[6].toInt();
        int IDENT = values[7].toInt();
        QString REFMATERIEL = values[8];

        // Check if the audit with the same ID already exists in the database
        QSqlQueryModel *model = A.RechercherAuditID(QString::number(IdAudit));

        if (model->rowCount() == 0) {
            // If the audit doesn't exist, add it to the table
            Audit A2(IdAudit, DateAudit, Duree, Resultat, Remarque, typeAudit, IDEMP, IDENT, REFMATERIEL);
            bool test = A2.ajouterAudit();

            if (test) {
                QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Ajout effectué\n"));
                ui->tableAff->setModel(A.afficherAudit());

                // Delete the backup file after successfully processing its content
                file.remove();
            } else {
                QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué \n"));
            }
        }
    }
    file.close();
}


void MainWindow::on_lesmethodes_currentChanged(int index)
{
    ui->comboBoxAuditSupp->setModel(A.afficher_AuditCombobox());
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{ QSqlQueryModel *model = new QSqlQueryModel();
    if (arg1 == "effectue")
    {
        model->setQuery("SELECT * FROM Audit_ WHERE RESULTAT = 'effectue'");
    }
    else if (arg1 == "non effectue")
    {
        model->setQuery("SELECT * FROM Audit_ WHERE RESULTAT = 'non effectue'");
    }
    else if (arg1 == "financier")
    {
        model->setQuery("SELECT * FROM Audit_ WHERE TYPEAUDIT = 'financier'");
    }
    else if (arg1 == "interne")
    {
        model->setQuery("SELECT * FROM Audit_ WHERE TYPEAUDIT = 'interne'");
    }
    else if (arg1 == "informatique")
    {
        model->setQuery("SELECT * FROM Audit_ WHERE TYPEAUDIT = 'informatique'");
    }
    else if (arg1.toInt() != 0)
    {
        QSqlQuery query;
        query.prepare("SELECT * FROM Audit_ WHERE Id_Audit = :id");
        query.bindValue(":id", arg1.toInt());
        query.exec();

        model->setQuery(query);
    }
    else
    {
        // Handle other cases or reset the model if needed
        model->setQuery("SELECT * FROM Audit_");  // Reset to the original data
    }

    ui->tableAff->setModel(model);
}




void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
 QSqlQueryModel *model = new QSqlQueryModel();
}




void MainWindow::on_idaudit_textChanged(const QString &arg1)
{
    ui->tableAff->setModel(A.RechercherAuditID(arg1));
}

void MainWindow::on_rechercheaudit_textChanged(const QString &arg1)
{
    // effectue non effectue
    QSqlQueryModel *model = new QSqlQueryModel();

    // Use a prepared statement to avoid SQL injection vulnerabilities
    QSqlQuery query;
    query.prepare("SELECT * FROM Audit_ WHERE RESULTAT LIKE :arg1");
    query.bindValue(":arg1", "%" + arg1 + "%");  // Assuming you want a partial match
    query.exec();

    model->setQuery(query);

    ui->tableAff->setModel(model);
}

void MainWindow::on_typeaudit_textChanged(const QString &arg1)
{
    // informatique
    QSqlQueryModel *model = new QSqlQueryModel();

    // Use a prepared statement to avoid SQL injection vulnerabilities
    QSqlQuery query;
    query.prepare("SELECT * FROM Audit_ WHERE TYPEAUDIT LIKE :arg1");
    query.bindValue(":arg1", "%" + arg1 + "%");
    query.exec();

    model->setQuery(query);

    ui->tableAff->setModel(model);
}











#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"audit.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_afficher_clicked();


    void on_modifier_clicked();


   // void on_tri_clicked();

    void on_asc_clicked();

    void on_desc_clicked();

    void on_pdf_bt_clicked();

   // void on_stat_clicked();

    void on_stat_clicked();



    void on_calendarBT_clicked();
    //void setCalendarDateColor(QCalendarWidget* calendar, const QDate& date, const QColor& color);

    void on_sms_clicked();

    void on_ajouter_2_clicked();

    void on_lesmethodes_currentChanged(int index);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);





    void on_idaudit_textChanged(const QString &arg1);

    void on_rechercheaudit_textChanged(const QString &arg1);

    void on_typeaudit_textChanged(const QString &arg1);


private:
    Ui::MainWindow *ui;
    Audit A;
};
#endif // MAINWINDOW_H

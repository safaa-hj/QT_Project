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

    void on_recherche_clicked();

    void on_tri_clicked();

private:
    Ui::MainWindow *ui;
    Audit A;
};
#endif // MAINWINDOW_H

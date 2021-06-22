#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "ventana1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString texto=" Ventana 1";
    Ventana1 *miVentana= new Ventana1(this,texto);
    miVentana->exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    QString texto=" Ventana 2";
    Ventana1 *miVentana= new Ventana1(this,texto);
    miVentana->exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    QString texto=" Ventana 3";
    Ventana1 *miVentana= new Ventana1(this,texto);
    miVentana->exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Ventana1 *miVentana= new Ventana1(this," Ventana 4");
    miVentana->exec();
}

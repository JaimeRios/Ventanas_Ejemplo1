#include "ventana1.h"
#include "ui_ventana1.h"

Ventana1::Ventana1(QWidget *parent, QString mitexto) :
    QDialog(parent),
    ui(new Ui::Ventana1)
{
    ui->setupUi(this);

    ui->label->setText("Estamos en la "+mitexto);
}

Ventana1::~Ventana1()
{
    delete ui;
}

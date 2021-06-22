#ifndef VENTANA1_H
#define VENTANA1_H

#include <QDialog>

namespace Ui {
class Ventana1;
}

class Ventana1 : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana1(QWidget *parent = 0, QString mitexto ="");
    ~Ventana1();

private:
    Ui::Ventana1 *ui;
};

#endif // VENTANA1_H

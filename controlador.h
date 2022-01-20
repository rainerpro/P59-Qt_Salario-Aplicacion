#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <QObject>

#include "obrero.h"

#define MATITUNO 2.65
#define VESPERTINO 2.73
#define NOCTURNO 2.87

#define HORA_EXTRA 50
#define IESS 9.5

class Controlador : public QObject
{
    Q_OBJECT
public:
    explicit Controlador(QObject *parent = nullptr);
    bool agregarObrero(QString nombre, int horas, TipoJornada jornada);
    bool calcularSalario();
    Obrero *obrero() const;

    double getTotalBruto() const;
    void setTotalBruto(double newTotalBruto);

    double getTotalIESS() const;
    void setTotalIESS(double newTotalIESS);

    double getTotalNeto() const;
    void setTotalNeto(double newTotalNeto);

signals:

private:
    Obrero *m_obrero;
    double totalBruto=0;
    double totalIESS=0;
    double totalNeto=0;

};

#endif // CONTROLADOR_H

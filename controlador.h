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
    double m_totalBruto;
    double m_totalIESS;
    double m_totalNeto;
    Obrero *obrero() const;


    double totalBruto() const;
    void setTotalBruto(double newTotalBruto);

    double totalIESS() const;
    void setTotalIESS(double newTotalIESS);

    double totalNeto() const;
    void setTotalNeto(double newTotalNeto);

signals:

private:
    Obrero *m_obrero;


};

#endif // CONTROLADOR_H

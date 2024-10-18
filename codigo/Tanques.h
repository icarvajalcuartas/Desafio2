
#ifndef TANQUES_H
#define TANQUES_H
#include "Surtidores.h"
#include <string>
#include "Funciones.h"

class Tanques{
private:
    short int eco,corriente,premium,cantidadSurtidores,estacion;
    Surtidores *arreglo;
public:
    Tanques(short int idEstacion);
    Tanques();

    ~Tanques();
    void setEco(short int ecoLitros);
    void setCorriente(short int corrienteLitros);
    void setPremium(short int premiumLitros);
    void setCantidadSurtidores(short int cantSurtidores);

    short int getEco() const;
    short int getCorriente() const;
    short int getPremium() const;
    short int getCantidadSurtidores() const;

    void mostrarInformacionTanque() const;

};

#endif // TANQUES_H


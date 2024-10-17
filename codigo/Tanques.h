
#ifndef TANQUES_H
#define TANQUES_H
#include "Surtidores.h"

class Tanques{
private:
    short int eco,corriente,premium,cantidadSurtidores;
    Surtidores *arreglo;
public:
    Tanques();
    Tanques(short int cantidad,short int geco, short int gcorriente, short int gpremium);
    ~Tanques();
    void setEco(short int ecoLitros);
    void setCorriente(short int corrienteLitros);
    void setPremium(short int premiumLitros);


    // Getters
    short int getEco() const;
    short int getCorriente() const;
    short int getPremium() const;
    short int getCantidadSurtidores() const;

    void mostrarInformacionTanque() const;

};

#endif // TANQUES_H


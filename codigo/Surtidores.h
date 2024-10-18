#ifndef SURTIDORES_H
#define SURTIDORES_H
#include "Ventas.h"
class Surtidores {
private:
    bool activo;
    short int codigo,litrosDisp,idEstacion;
    char modelo;
    Ventas venta;
public:
    Surtidores();
    Surtidores(short int litros,short int estacion);

    short int getLitrosDisponibles() const;
    short int getCodigo() const;
    char getModelo() const;
    bool isActivo() const;
    short int getIdEstacion()const;

    void setLitrosDisponibles(short int litros);
    void setModelo(char mod);


    void actualizarEstado();

    void mostrarInformacionSurtidor() const;

};

#endif // SURTIDORES_H

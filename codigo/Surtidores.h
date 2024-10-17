#ifndef SURTIDORES_H
#define SURTIDORES_H
#include "Ventas.h"
class Surtidores {
private:
    bool activo;
    short int codigo,litrosDisp,cantVentas;
    char modelo;
    Ventas *ventas;
public:
    Surtidores();
    Surtidores(short int litros, short int cantidad=-1);

    ~Surtidores();
    short int getLitrosDisponibles() const;
    short int getCodigo() const;
    char getModelo() const;
    short int getCantidadVentas() const;
    bool isActivo() const;

    void setLitrosDisponibles(short int litros);
    void setModelo(char mod);


    void actualizarEstado();

    void mostrarInformacionSurtidor() const;

};

#endif // SURTIDORES_H

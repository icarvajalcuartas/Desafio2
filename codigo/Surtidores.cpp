
#include "Surtidores.h"
#include <iostream>
using namespace std;
Surtidores::Surtidores(): codigo(rand() % 9000 + 1000),
    venta(codigo) {
    idEstacion=0;
    litrosDisp = 0;
    modelo = ' ';
    activo = false;
}


Surtidores::Surtidores(short int litros, short int estacion): codigo(rand() % 9000 + 1000),
    venta(codigo) {
    litrosDisp = litros;
    idEstacion=estacion;
    modelo = 'A' + rand() % 26;

    activo = true;
}


short int Surtidores::getLitrosDisponibles() const {
    return litrosDisp;
}

short int Surtidores::getCodigo() const {
    return codigo;
}

char Surtidores::getModelo() const {
    return modelo;
}

short int Surtidores::getIdEstacion()const{
    return idEstacion;
}
bool Surtidores::isActivo() const {
    return activo;
}


void Surtidores::setLitrosDisponibles(short int litros) {
    litrosDisp = litros;
    actualizarEstado();
}

void Surtidores::setModelo(char mod) {
    modelo = mod; // Establece el modelo del surtidor
}


void Surtidores::actualizarEstado() {
    if (litrosDisp == 0) {
        activo = false;
    } else {
        activo = true;
    }
}


void Surtidores::mostrarInformacionSurtidor() const {
    cout << "Surtidor - Codigo: " << codigo << ", Modelo: " << modelo<<endl;
    cout << ", Litros Disponibles: " << litrosDisp<<endl;
    cout << ", Activo: " << (activo ? "Si" : "No") <<endl;
    cout<<"Su estacion respectiva es: "<<idEstacion<<endl;
    venta.mostrarInformacionVenta();
}

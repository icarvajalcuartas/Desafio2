
#include "Surtidores.h"
#include <iostream>
using namespace std;

Surtidores::Surtidores(){
    litrosDisp=rand() % (601 - 100) + 100;
    cantVentas = rand() % 10 + 1;
    codigo = rand() % 9000 + 1000;
    modelo = 'A' + rand() % 26;

    ventas = new Ventas[cantVentas];
    for (short int i = 0; i < cantVentas; i++) {
        ventas[i] = Ventas();
    }
    activo = true;

}


Surtidores::Surtidores(short int litros, short int cantidad) {
    litrosDisp = litros;

    if (cantidad == -1) {
        cantVentas = rand() % 10 + 1;
    } else {
        cantVentas = cantidad > 10 ? 10 : cantidad;
    }

    codigo = rand() % 9000 + 1000;
    modelo = 'A' + rand() % 26;


    ventas = new Ventas[cantVentas];
    for (short int i = 0; i < cantVentas; i++) {
        ventas[i] = Ventas();
    }
    activo = true;
}

Surtidores::~Surtidores() {
    delete[] ventas;
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

short int Surtidores::getCantidadVentas() const {
    return cantVentas;
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
    cout << ", Cantidad de Ventas: " << cantVentas<<endl;
    cout << ", Activo: " << (activo ? "Si" : "No") <<endl;

    for (short int i = 0; i < cantVentas; i++) {
        cout << "Venta " << (i + 1) << ": ";
        ventas[i].mostrarInformacionVenta(); // Mostrar información de cada venta
    }
}

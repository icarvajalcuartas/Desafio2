#include "Ventas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "Funciones.h"
using namespace std;

float Ventas::generarLitrosAleatorio() {
    return (rand() % 18) + 3;
}

short int Ventas::generarCategoriaAleatoria() {
    return (rand() % 3) + 1;
}

short int Ventas::generarMetodoPagoAleatorio() {
    return (rand() % 3 )+ 1;
}

short int Ventas::generarRegionAleatoria(){
    return (rand() % 3) + 1;
}

long long  Ventas::generarDocumentoAleatorio() {
    return 1000000000LL + rand() % 9000000000LL;
}


void Ventas::obtenerFechaHoraActual() {
    auto now = chrono::system_clock::now();
    time_t tiempoActual = chrono::system_clock::to_time_t(now);
    tm* partesTiempo = localtime(&tiempoActual);


    fecha = to_string(partesTiempo->tm_mday) + "/" + to_string(partesTiempo->tm_mon + 1) + "/" + to_string(partesTiempo->tm_year + 1900);
    hora = to_string(partesTiempo->tm_hour) + ":" + to_string(partesTiempo->tm_min);
}


float Ventas::calcularMontoTotal(short int reg, short int cat,float l ) {
    return l * precioGasolina(reg,cat);
}


Ventas::Ventas(float l,short int cat, short int met,short int reg, long long doc) {
    srand(time(0));
    obtenerFechaHoraActual();


    litros = (l == -1) ? generarLitrosAleatorio() : l;
    categoriaGasolina = (cat == -1) ? generarCategoriaAleatoria() : cat;
    region = (reg == -1) ? generarRegionAleatoria() : reg;
    metodoPago = (met == -1) ? generarMetodoPagoAleatorio() : met;
    documentoCliente = (doc == -1) ? generarDocumentoAleatorio() : doc;


    montoTotal = calcularMontoTotal(region,categoriaGasolina,litros);
}
void Ventas::setLitros(float l) {
    litros = l;
}
void Ventas::setCategoriaGasolina(short int cat) {
    categoriaGasolina = cat;
}
void Ventas::setMetodoPago(short int met) {
    metodoPago = met;
}
void Ventas::setRegion(short int reg){
    region = reg;
}
void Ventas::setDocumentoCliente(long long doc) {
    documentoCliente = doc;
}

void Ventas::mostrarInformacionVenta() {
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout << "Cantidad de litros: " << litros << " L" << endl;
    cout << "Categoria de gasolina: " << categoriaGasolina << " (1: Premium, 2: Extra, 3: Eco)" << endl;
    cout << "Metodo de pago: " << metodoPago << " (1: TCredito, 2: TDebito, 3: Efectivo)" << endl;
    cout << "Region: "<< region << " (1: Norte, 2: centro, 3: sur)"<<endl;
    cout << "Documento del cliente: " << documentoCliente << endl;
    cout << "Monto total: $" << montoTotal << endl;
}

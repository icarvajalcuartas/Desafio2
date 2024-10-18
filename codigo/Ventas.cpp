#include "Ventas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "Funciones.h"
using namespace std;

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

Ventas::Ventas(short int codigo) {
    obtenerFechaHoraActual();
    codigoSurtidor=codigo;
    litros=(rand() % 18) + 3;
    categoriaGasolina =rand() % 3 + 1;
    region = rand() % 3 + 1;
    metodoPago = rand() % 3 + 1;
    documentoCliente =  1000000000LL + rand() % 9000000000LL;
    montoTotal = calcularMontoTotal(region,categoriaGasolina,litros);

}

Ventas::Ventas(float l,short int cat, short int met,short int reg, long long doc){
    obtenerFechaHoraActual();
    codigoSurtidor=rand() % 9000 + 1000;
    litros=l;
    categoriaGasolina=cat;
    region=reg;
    metodoPago=met;
    documentoCliente=doc;
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
void Ventas::setCodigoSurtidor(short cod){
    codigoSurtidor=cod;
}

float Ventas:: getLitros()const{
    return litros;
}
short int Ventas:: getCategoriaGasolina()const{
    return categoriaGasolina;
}
short int Ventas::getRegion()const{
    return region;
}
short int Ventas::getMetodo()const{
    return metodoPago ;
}
long long Ventas:: getDocumentoCliente()const{
    return documentoCliente;
}
float Ventas:: getMontoTotal()const{
    return montoTotal;
}
short int Ventas:: getCodigoSurtidor()const{
    return codigoSurtidor;
}
std::string Ventas::getFecha()const{
    return fecha;
}
std::string Ventas:: getHora()const{
    return hora;
}

void Ventas::mostrarInformacionVenta()const {
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout<<"surtidor con codigo: "<<codigoSurtidor<<endl;
    cout << "Cantidad de litros: " << litros << " L" << endl;
    cout << "Categoria de gasolina: " << categoriaGasolina << " (1: Premium, 2: Extra, 3: Eco)" << endl;
    cout << "Metodo de pago: " << metodoPago << " (1: TCredito, 2: TDebito, 3: Efectivo)" << endl;
    cout << "Region: "<< region << " (1: Norte, 2: centro, 3: sur)"<<endl;
    cout << "Documento del cliente: " << documentoCliente << endl;
    cout << "Monto total: $" << montoTotal << endl;
}

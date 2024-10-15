#include "Ventas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "Funciones.h"
using namespace std;

// Método para generar una cantidad aleatoria de litros entre 3 y 20
float Ventas::generarLitrosAleatorio() {
    return (rand() % 18) + 3;  // Genera un número entre 3 y 20

}

// Método para generar una categoría aleatoria de gasolina (1-3)
short int Ventas::generarCategoriaAleatoria() {
    cout<<(rand() % 3) + 1<<endl;
    return (rand() % 3) + 1;  // Genera un número entre 1 y 3
}

// Método para generar un método de pago aleatorio (1-3)
short int Ventas::generarMetodoPagoAleatorio() {
    cout<<(rand() % 3) + 1<<endl;
    return (rand() % 3 )+ 1;  // Genera un número entre 1 y 3
}

short int Ventas::generarRegionAleatoria(){
    cout<<(rand() % 3) + 1<<endl;
    return (rand() % 3) + 1;  // Genera un número entre 1 y 3
}
// Método para generar un número de documento aleatorio de 10 dígitos
long long  Ventas::generarDocumentoAleatorio() {
    return 1000000000LL + rand() % 9000000000LL;  // Genera un número de 10 dígitos
}

// Método para obtener la fecha y hora actual
void Ventas::obtenerFechaHoraActual() {
    auto now = chrono::system_clock::now();
    time_t tiempoActual = chrono::system_clock::to_time_t(now);
    tm* partesTiempo = localtime(&tiempoActual);

    // Asignar fecha y hora con formato
    fecha = to_string(partesTiempo->tm_mday) + "/" + to_string(partesTiempo->tm_mon + 1) + "/" + to_string(partesTiempo->tm_year + 1900);
    hora = to_string(partesTiempo->tm_hour) + ":" + to_string(partesTiempo->tm_min);
}

// Método para calcular el monto total (4 litros = 15 pesos)
float Ventas::calcularMontoTotal(short int reg, short int cat,float l ) {

    return l * precioGasolina(reg,cat);
}

// Constructor de la clase Ventas
Ventas::Ventas(float l,short int cat, short int met,short int reg, long long doc) {
    srand(time(0));
    obtenerFechaHoraActual();  // Asignar la fecha y la hora

    // Si no se proporciona una cantidad, se genera aleatoriamente
    litros = (l == -1) ? generarLitrosAleatorio() : l;
    categoriaGasolina = (cat == -1) ? generarCategoriaAleatoria() : cat;
    region = (reg == -1) ? generarRegionAleatoria() : reg;
    metodoPago = (met == -1) ? generarMetodoPagoAleatorio() : met;
    documentoCliente = (doc == -1) ? generarDocumentoAleatorio() : doc;

    // Calcular el monto total
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
// Método para mostrar la información de la venta
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

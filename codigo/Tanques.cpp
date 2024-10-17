
#include"Tanques.h"
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

Tanques::Tanques() {
    cantidadSurtidores = rand() % 11 + 2;
    cout<<"PRUEBA TANQUES LA CANTIDAD ALEATORIA ES:"<<cantidadSurtidores<<endl;
    eco = (rand() % 101) + 100;
    corriente = (rand() % 101) + 100;
    premium = (rand() % 101) + 100;


    short int suma=eco + corriente + premium;
    arreglo=new Surtidores[cantidadSurtidores];
    for (short int i=0;i<cantidadSurtidores;i++){
        arreglo[i]=Surtidores(suma,1);
    }

}

Tanques::Tanques(short int cantidad,short int geco, short int gcorriente, short int gpremium) {

    if ((cantidad>2 && cantidad<12)||(cantidad==2)||(cantidad==12)){
        cantidadSurtidores = cantidad;
    }

    eco = geco;
    corriente = gcorriente;
    premium =gpremium;


    short int suma=eco + corriente + premium;

    arreglo=new Surtidores[cantidadSurtidores];
    for (short int i=0;i<cantidadSurtidores;i++){
        arreglo[i]=Surtidores(suma,1);
    }
}
Tanques::~Tanques(){
    delete[]arreglo;
}


void Tanques::setEco(short int ecoLitros) {
    eco = ecoLitros;
}

void Tanques::setCorriente(short int corrienteLitros) {
    corriente = corrienteLitros;
}

void Tanques::setPremium(short int premiumLitros) {
    premium = premiumLitros;
}


short int Tanques::getEco() const {
    return eco;
}

short int Tanques::getCorriente() const {
    return corriente;
}

short int Tanques::getPremium() const {
    return premium;
}

short int Tanques::getCantidadSurtidores() const {
    return cantidadSurtidores;
}

void Tanques::mostrarInformacionTanque() const {
    cout << "Tanque - Cantidad de gasolina:" << endl;
    cout << "Eco: " << eco << " L" << endl;
    cout << "Corriente: " << corriente << " L" << endl;
    cout << "Premium: " << premium << " L" << endl;
    cout << "Cantidad de Surtidores: " << cantidadSurtidores << endl;

    // Mostrar información de cada surtidor
    for (short int i = 0; i < cantidadSurtidores; i++) {
        cout << "Surtidor " << (i + 1) << ":" << endl;
        arreglo[i].mostrarInformacionSurtidor(); // Mostrar información de cada surtidor;
    }
}

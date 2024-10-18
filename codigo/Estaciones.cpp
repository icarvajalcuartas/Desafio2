#include "Estaciones.h"
#include <iostream>
using namespace std;
#include <cstdlib>

float Estaciones:: genCoordenadas (short int x){
    if (x==0){
        float latitud = (static_cast<float>(rand()) / RAND_MAX) * 180.0f - 90.0f;
        return latitud;
    }
    if(x==1){
        float longitud = (static_cast<float>(rand()) / RAND_MAX) * 360.0f - 180.0f;
        return longitud;
    }
    return 0.0f;
}
Estaciones::Estaciones():id(rand() % 900 + 100),tanque(id),gerente("Luis"){
    islas=rand() % 12 + 1;
    region = rand() % 3 + 1;
    for (short int i=0;i<2;i++){
        gps[i]=genCoordenadas(i);
    }
}

short int Estaciones::getId()const{
    return id;
}

short int Estaciones:: getRegion()const{
    return region;
}
short int  Estaciones:: getIslas()const{
    return islas;
}
std::string  Estaciones:: getGerente()const{
    return gerente;
}
float Estaciones:: getLatitud()const{
    return gps[0];
}
float Estaciones:: getLongitud()const{
    return gps[1];
}

Tanques Estaciones:: getTanque()const{
    return tanque;
}

void Estaciones::setId(short int identificador){
    id=identificador;
}

void Estaciones:: setRegion(short int reg){
    region=reg;
}

void Estaciones::mostrarInformacionEstaciones()const{
    cout<<"El id de la estacion es: "<<id<<endl;
    cout<<"La region de la estacion es: "<<region<<"(1: Norte, 2: centro, 3: sur)"<<endl;
    cout<<"El numero de islas de la estacion es: "<<islas<<endl;
    cout<<"El gerente de la estacion es: "<<gerente<<endl;
    cout<<"las coordenadas de la estacion son: ("<<gps[0]<<" , "<<gps[1]<<")"<<endl;
    cout<<"----informacion del tanque----"<<endl;
    tanque.mostrarInformacionTanque();
}


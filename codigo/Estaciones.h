#ifndef ESTACIONES_H
#define ESTACIONES_H
#include "Tanques.h"
#include <string>
#include <cstdlib>
class Estaciones {
private:
    short int id,region,islas;
    std::string gerente;
    Tanques tanque;
    float gps[2];
public:
    float genCoordenadas (short int x);
    Estaciones();

    short int getId()const;
    short int getRegion()const;
    short int getIslas()const;
    std::string getGerente()const;
    float getLatitud()const;
    float getLongitud()const;
    Tanques getTanque()const;

    void setId(short int identificador);
    void setRegion(short int reg);


    void mostrarInformacionEstaciones()const;
};

#endif // ESTACIONES_H

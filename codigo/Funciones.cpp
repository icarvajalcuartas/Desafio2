#include "Funciones.h"
using namespace std;

float precioGasolina (short int reg, short int cat){
    float array [3][3]={{8.0,9.5,5.4},{7.0,10.3,2.3},{6.5,4.6,11.4}};
    reg=reg-1;
    cat=cat-1;
    return array [reg][cat];
}

#ifndef VENTAS_H
#define VENTAS_H
#include <string>
#include "Funciones.h"
class Ventas{
private:

std::string fecha;
std::string hora;
float litros;
short int categoriaGasolina;  // 1: Premium, 2: Extra, 3: Eco
short int region; // 1: Norte, 2: centro, 3:sur
short int metodoPago;         // 1: TCredito, 2: TDebito, 3: Efectivo
long long documentoCliente;
float montoTotal;
short int codigoSurtidor;

void obtenerFechaHoraActual();
float calcularMontoTotal(short int reg, short int cat, float l);

public:
Ventas(short int codigo);
Ventas(float l,short int cat, short int met,short int reg, long long doc);


void setLitros(float l);
void setCategoriaGasolina(short int cat);
void setMetodoPago(short int met);
void setRegion(short int reg);
void setDocumentoCliente(long long doc);
void setCodigoSurtidor(short int cod);
void setMontoTotal(float monto);

float getLitros()const;
short int getCategoriaGasolina()const;
short int getRegion()const;
short int getMetodo()const;
long long getDocumentoCliente()const;
float getMontoTotal()const;
short int getCodigoSurtidor()const;
std::string getFecha()const;
std::string getHora()const;


void mostrarInformacionVenta()const;
};
#endif // VENTAS_H

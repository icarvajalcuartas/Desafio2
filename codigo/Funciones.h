#ifndef FUNCIONES_H
#define FUNCIONES_H
#include "Ventas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Funciones.h"
#include "Surtidores.h"
#include "Tanques.h"
#include "Estaciones.h"

float precioGasolina (short int reg, short int cat);

void menuPrincipal();
void agregarEstacion();
void eliminarEstacion();
void calcularVentas();
void fijarPrecios();
void agregarSurtidor();
void eliminarSurtidor();
void activarSurtidor();
void desactivarSurtidor();
void consultarHistorico();
void reportarLitrosVendidos();
void simularVenta();
void asignarCapacidadTanque();
void detectarFugas();
void mensaje1();

#endif // FUNCIONES_H

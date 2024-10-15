#ifndef VENTAS_H
#define VENTAS_H
#include <string>
#include "Funciones.h"

class Ventas {
private:
    std::string fecha;
    std::string hora;
    float litros;
    short int categoriaGasolina;  // 1: Premium, 2: Extra, 3: Eco
    short int region; // 1: Norte, 2: centro, 3:sur
    short int metodoPago;         // 1: TCredito, 2: TDebito, 3: Efectivo
    long long documentoCliente;
    float montoTotal;


    float generarLitrosAleatorio();
    short int generarCategoriaAleatoria();
    short int generarMetodoPagoAleatorio();
    short int generarRegionAleatoria();
    long long generarDocumentoAleatorio();
    void obtenerFechaHoraActual();
    float calcularMontoTotal(short int reg, short int cat, float l);

public:

    Ventas(float l = -1,short int cat = -1, short int met = -1, short int reg= -1, long long doc = -1);

    void setLitros(float l);
    void setCategoriaGasolina(short int cat);
    void setMetodoPago(short int met);
    void setRegion(short int reg);
    void setDocumentoCliente(long long doc);


    void mostrarInformacionVenta();
};
#endif // VENT_H

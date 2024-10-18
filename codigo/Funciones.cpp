#include "Funciones.h"
#include <iostream>
#include "Ventas.h"
#include "Surtidores.h"
#include "Tanques.h"
#include "Estaciones.h"

using namespace std;

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

void mensaje1(){
    cout << "                  **********************************" << "\n" <<
            "                  *        Numero no valido.       *" << "\n" <<
            "                  **********************************" << "\n" << endl;
}
void mensaje2(){
    cout << "Seleccione una opcion: " endl;
}

float precioGasolina (short int reg, short int cat){
    float array [3][3]={{8.0,9.5,5.4},{7.0,10.3,2.3},{6.5,4.6,11.4}};
    reg=reg-1;
    cat=cat-1;
    return array [reg][cat];
}

void menuPrincipal() {
    char opcion;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Gestion de la Red\n";
        cout << "2. Gestion de Estaciones de Servicio\n";
        cout << "3. Sistema Nacional de Verificacion de Fugas\n";
        cout << "4. Simulacion de Ventas\n";
        cout << "0. Salir\n";
        mensaje2();
        cin >> opcion;

        switch(opcion) {
        case 1: {
            int subOpcion;
            cout << "\n--- Gestion de la Red ---\n";
            cout << "1. Agregar Estacion de Servicio\n";
            cout << "2. Eliminar Estacion de Servicio\n";
            cout << "3. Calcular Ventas por Categoria\n";
            cout << "4. Fijar Precios de Combustible\n";
            cout << "0. Volver al Menu Principal\n";
            mensaje2();
            cin >> subOpcion;

            switch(subOpcion) {
            case 1: agregarEstacion(); break;
            case 2: eliminarEstacion(); break;
            case 3: calcularVentas(); break;
            case 4: fijarPrecios(); break;
            case 0: break;
            default: mensaje1(); break;
            }
            break;
        }
        case 2: {
            int subOpcion;
            cout << "\n--- Gestion de Estaciones de Servicio ---\n";
            cout << "1. Agregar Surtidor\n";
            cout << "2. Eliminar Surtidor\n";
            cout << "3. Activar Surtidor\n";
            cout << "4. Desactivar Surtidor\n";
            cout << "5. Consultar Historico de Transacciones\n";
            cout << "6. Reportar Litros Vendidos\n";
            cout << "7. Simular Venta de Combustible\n";
            cout << "8. Asignar Capacidad del Tanque de Suministro\n";
            cout << "0. Volver al Menu Principal\n";
            mensaje2();
            cin >> subOpcion;

            switch(subOpcion) {
            case 1: agregarSurtidor(); break;
            case 2: eliminarSurtidor(); break;
            case 3: activarSurtidor(); break;
            case 4: desactivarSurtidor(); break;
            case 5: consultarHistorico(); break;
            case 6: reportarLitrosVendidos(); break;
            case 7: simularVenta(); break;
            case 8: asignarCapacidadTanque(); break;
            case 0: break;
            default: mensaje1(); break;
            }
            break;
        }
        case 3: detectarFugas(); break;
        case 4: simularVenta(); break;
        case 0: cout << "Saliendo del programa.\n"; break;
        default: mensaje1(); break;
        }
    } while (opcion != 0);
}

void simularVenta(){


    char opcionVenta;
    cout << "1. Simulacion de Ventas Automatica\n";
    cout << "2. Simulacion de Ventas Por el Usuario\n";
    cout << "0. Menu anterior\n";
    cin >> opcionVenta;

    switch (opcionVenta) {
        short int codigo = rand() % 900 + 100;

        case 0: cout << "Saliendo del programa.\n"; break;
        case 1: venta(codigo); break;
        case 2;
            float litros = 0;
            short int categoria = 0;
            bool posibleVenta = false;
            short int metodo = 0;
            Tanques tanque1;
            Ventas venta1(litros,categoria,metodo,region,documento);

            cout << "Escriba litros de gasolina que sea comprar\n";
            cin >> litros;
            cout << "tipo de gasolina que desea comprar(1: Premium, 2: Corriente, 3: Eco)\n";
            cin >> categoria;
            switch (categoria) {
                case 1:
                    if ((tanque1.getPremium()>=3){
                        if (tanque(codigo)=3){
                            litros = 3
                            posibleVenta = true;
                        }else{
                            posibleVenta = true;
                            //venta(litros, categoria, short int met,short int reg, long long doc);
                        }
                    }
                case 2:
                    tanque1.getCorriente()
                case 2:
                    tanque1.getEco()

            break;
            cout << "escriba";
            cin >> metodo;

            if (posibleVenta){
                venta(litros, categoria,metodo,)
}
        default:
            break;
        }
            if  (tanque.<=3){
                if (tanque(codigo)=3){
                    litros = 3
                    venta(litros, categoria, short int met,short int reg, long long doc);
                }else{
                    venta(litros, categoria, short int met,short int reg, long long doc);
                }
            }
            break;
        default: mensaje1(); break;
    }
}

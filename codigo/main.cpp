#include <iostream>
#include "Ventas.h"
#include <cstdlib>
#include <ctime>
#include "Funciones.h"

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int x;
    cout<<"Si desea una venta aleatoria presione 1 o 2  para una venta ingresando datos";
    cin>>x;
    switch (x) {
    case 1:{
        Ventas ventaAleatoria(-1,-1,-1,-1,-1);
        cout << "--- Informacion de la venta aleatoria ---\n";
        ventaAleatoria.mostrarInformacionVenta();
        break;
    }
    case 2:{
        // Solicitar datos al usuario para una nueva venta
        cout << "\n--- Ingrese los detalles de la venta ---\n";
        float litros;
        unsigned short int categoria, metodo,region;
        long long documento;

        do {
            cout << "Cantidad de litros (3-20): ";
            cin >> litros;
            if (litros < 3 || litros > 20) {
                cout << "Por favor, ingrese un valor valido entre 3 y 20.\n";
            }
        } while (litros < 3 || litros > 20);


        do {
            cout << "Categoria de gasolina (1: Premium, 2: Extra, 3: Eco): ";
            cin >> categoria;
            if (categoria < 1 || categoria > 3) {
                cout << "Por favor, ingrese un valor valido (1, 2 o 3).\n";
            }
        } while (categoria < 1 || categoria > 3);


        do {
            cout << "Metodo de pago (1: TCredito, 2: TDebito, 3: Efectivo): ";
            cin >> metodo;
            if (metodo < 1 ||metodo > 3) {
                cout << "Por favor, ingrese un valor valido (1, 2 o 3).\n";
            }
        } while (metodo < 1 || metodo > 3);

        do {
            cout << "region (1: Norte, 2: Centro, 3: Sur ): ";
            cin >> region;
            if (region < 1 || region > 3) {
                cout << "Por favor, ingrese un valor valido (1, 2 o 3).\n";
            }
        } while (region< 1 || region > 3);

        cout << "Numero de documento del cliente (10 cifras): ";
        cin >> documento;

        // Crear una nueva venta con los datos ingresados por el usuario
        Ventas ventaUsuario;
        ventaUsuario.setLitros(litros);
        ventaUsuario.setCategoriaGasolina(categoria);
        ventaUsuario.setMetodoPago(metodo);
        ventaUsuario.setRegion(region);
        ventaUsuario.setDocumentoCliente(documento);

        // Mostrar información de la venta del usuario
        cout << "\n--- Información de la venta ingresada por el usuario ---\n";
        ventaUsuario.mostrarInformacionVenta();
        break;
    }
    default:
        cout << "Opcion no valida. Por favor elija 1 o 2." <<endl;
        break;
    }
    return 0;
}

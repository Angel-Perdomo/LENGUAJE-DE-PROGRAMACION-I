#include <iostream>
#include "productos.h"
#include "factura.h"

using namespace std;


void menu()
{
    int opcion = 0;

    while (true)
    {
        system("cls");
        cout << "**********";
        cout << "MENU";
        cout << "**********";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 - Bebidas calientes" << endl;
        cout << "2 - Bebidas frias" << endl;
        cout << "3 - Reposteria" << endl;
        cout << "4 - Imprimir factura" << endl;
        cout << "0 - salir" << endl;

        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout << endl;
        
        if (opcion == 0)
        {
            break;
        }
        if (opcion == 4)
        {
            imprimirFactura();
        }else
        {
            productos(opcion);
        }
        
    }
}


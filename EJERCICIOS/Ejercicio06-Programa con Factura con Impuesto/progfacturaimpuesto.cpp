#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //DECLARANDO VARIABLES
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    //DATOS DE ENTRADA
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    //PROCESO
    total = subtotal + (subtotal*impuesto);


    //DATOS DE SALIDA
    cout << endl;
    cout << "Total a pagar es: " << total << endl;


    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //DECLARANDO VARIABLES
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calcudescuento = 0;
    double calcimpuesto = 0;

    //DATOS DE ENTRADA
    cout << endl;
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    //PROCESO
    calcudescuento = (subtotal * descuento)/100;
    calcimpuesto = (subtotal - calcudescuento) * impuesto;
    total = (subtotal - calcudescuento + calcimpuesto);


    //DATOS DE SALIDA
    cout << endl;
    cout << "Total a pagar es: " << total;
    cout << endl;

    system("pause");

    return 0;
}
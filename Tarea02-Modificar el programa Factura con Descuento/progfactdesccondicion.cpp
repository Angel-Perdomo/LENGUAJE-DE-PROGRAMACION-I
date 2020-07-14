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
    char estaExenta;
    double totalExento = 0;
    double calcudescuentoexento = 0;

    //DATOS DE ENTRADA
    cout << endl;
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "¿Es factura exenta? escriba S o N: " << endl;
    cin >> estaExenta;

    //PROCESO PARA LA FACTURA EXENTA
    calcudescuentoexento = (subtotal * descuento)/100;
    totalExento = (subtotal - calcudescuentoexento + calcimpuesto);

    //PROCESO PARA LA FACTURA NO EXENTA
    calcudescuento = (subtotal * descuento)/100;
    calcimpuesto = (subtotal - calcudescuento) * impuesto;
    total = (subtotal - calcudescuento + calcimpuesto);

cout << "-------------------------------------------";
//DATOS DE SALIDA
    if (estaExenta == 's' || estaExenta == 'S')
    {
    cout << endl;
    cout << "Total exento a pagar es: " << totalExento;
    cout << endl;
    } else if(estaExenta == 'n' || estaExenta == 'N')
    {
    cout << endl;
    cout << "Total a pagar es: " << total << endl;
    }
    cout << "-------------------------------------------";


//PAUSA LA CONSOLA
    system("pause");

    return 0;
}
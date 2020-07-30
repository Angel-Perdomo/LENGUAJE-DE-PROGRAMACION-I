#include <iostream>

using namespace std;

double subtotal = 0;
double total = 0;
double impuesto = 0.15;
double elimpuesto = 0;
string listaProducto;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProducto = listaProducto + descripcion + '\n'; // EL \n ES COMO EL Endl.
    subtotal = subtotal + (cantidad * precio);
    elimpuesto = (subtotal*impuesto);
    total = subtotal + (subtotal*impuesto);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProducto;
    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "El impuesto (15%): " << elimpuesto;
    cout << endl;
    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;
    cout << endl;

system("pause");
}
#include <iostream>

using namespace std;

double subtotal;
string listaProducto;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProducto = listaProducto + descripcion + '\n'; // EL \n ES COMO EL Endl.
    subtotal = subtotal + (cantidad * precio);
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
    cout << endl;

system("pause");
}
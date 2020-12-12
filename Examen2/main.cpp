#include <iostream>

// Incluye la definición de la Clase Arma.
#include "interfazMain.h"

using namespace std;


int main(int argc, char const *argv[])
{
    string Nombre;
    string Tipo;
    int CapacidadDeMunicion;

    system("COLOR F0");//Color de fondo y del texto

    cout << endl;
    cout << "Ingrese el Nombre del arma asi como esta: " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Sig_Sauer" << endl;
    cout << "Bereta" << endl;
    cout << "Smith_&_Wesson" << endl;
    cout << "---------------------------------------" << endl;
    cin >> Nombre;
    cout << endl;

    cout << "Ingrese el Tipo de arma: " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Pistola" << endl;
    cout << "Rifle" << endl;
    cout << "Ametralladora" << endl;
    cout << "---------------------------------------" << endl;
    cin >> Tipo;
    cout << endl;

    cout << "Ingrese la Capacidad de Municion de (0 - 50): " << endl;
    cin >> CapacidadDeMunicion;

    //Creacion de Objetos.
    Arma pNombre = Arma(Nombre, Tipo, CapacidadDeMunicion);
    Arma pTipo = Arma(Nombre, Tipo, CapacidadDeMunicion);
    Arma pCapacidadDeMunicion = Arma(Nombre, Tipo, CapacidadDeMunicion);

    system("COLOR F2");//Color de fondo y del texto
    system("cls");//Limpio pantalla

    pNombre.establecerArma();
    // pTipo.establecerArma();
    // pCapacidadDeMunicion.establecerArma();

    system("pause");
    return 0;
}

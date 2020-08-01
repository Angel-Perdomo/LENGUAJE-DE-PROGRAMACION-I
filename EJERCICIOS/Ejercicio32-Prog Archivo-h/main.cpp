#include <iostream>
#include "calculadora.h"
#include "alumnos.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << calcular(5, 4, '+');
    cout << endl;
    cout << obtenerNombreCompleto();
    cout << endl;
    cout << obtenerEdad();
    cout << endl;


    return 0;
}

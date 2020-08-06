#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double numRaizCuadrada = 0;

    cout << "Ingrese un numero para sacar Raiz Cuadrada: ";
    cin >> numero;

    numRaizCuadrada = sqrt(numero); 

    cout << endl;
    cout << "La Raiz Cuadrada de " << numero << " es: " << numRaizCuadrada;
    cout << endl;
    cout << endl;


    system("pause");
    return 0;
}

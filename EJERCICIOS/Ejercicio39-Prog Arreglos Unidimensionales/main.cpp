#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //MATRICES (ARREGLOS).
//**Declaracion del Arreglo.**
    int numeros[5]; // CINCO POSICIONES o INDICE [5].
    // INICIA EN CERO [0], PORQUE ES REGLA DE LOS ARREGLOS.
//**Asignacion de valores a un arreglo Unidimensional.**
    numeros[0] = 10; //ESTOS SON NUMEROS AL AZAR QUE ESCOGI.
    numeros[1] = 5;
    numeros[2] = 7;
    numeros[3] = 50;
    numeros[4] = 2;

//**Lectura de los valores de un arreglo unidimensional.**
cout << endl;
    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;
cout << endl;

    system("pause");
    return 0;
}

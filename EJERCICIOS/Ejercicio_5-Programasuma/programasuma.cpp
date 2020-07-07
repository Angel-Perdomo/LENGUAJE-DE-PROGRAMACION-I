#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
//DECLARANDO VARIABLES
int a = 0;
int b = 0;
int resultado;

//PIDIENDO LOS DATOS DE ENTRADA
cout << "Ingrese el valor a: ";
cin >> a;
cout << endl;
cout << "Ingrese el valor b: ";
cin >> b;

//EJECUCIÓN DE CADA PROCESO
resultado = a + b;

//MOSTRAR DATOS DE SALIDA
cout << "RESULTADOS: " << endl;
cout << "El resultado de a + b es: "<< resultado;


return  0;
}

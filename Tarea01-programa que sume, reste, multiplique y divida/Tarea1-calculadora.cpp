#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
//DECLARANDO VARIABLES
int a = 0;
int b = 0;
int resta, suma, multiplicacion, division;

//PIDIENDO LOS DATOS DE ENTRADA
cout << "Ingrese el primer numero: ";
cin >> a;
cout << endl;
cout << "Ingrese el segundo numero: ";
cin >> b;

//EJECUCIÓN DE CADA PROCESO
resta = a - b;
suma = a + b;
multiplicacion = a * b;
division = a / b;

//MOSTRAR DATOS DE SALIDA
cout << "RESULTADOS: " << endl;
cout << "La resta es: "<< resta << endl;
cout << "La suma es: "<< suma << endl;
cout << "La multiplicacion es: "<< multiplicacion << endl;
cout << "La division es: "<< division << endl;

system("pause");

return  0;
}

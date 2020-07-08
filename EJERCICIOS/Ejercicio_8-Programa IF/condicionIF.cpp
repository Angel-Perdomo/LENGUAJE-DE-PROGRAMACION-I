#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numerosecreto = 23;
    int numero = 0;

    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

cout << "-------------------------" << endl;

    if (numero==numerosecreto)
    {
        cout << "Adivinastes el numero secreto: " << numero << endl;
    } else
    {
        cout << "No adivinastes" << endl;
    }

    cout << "-------------------------" << endl;


    return 0;
}

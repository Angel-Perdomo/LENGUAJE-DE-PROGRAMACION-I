#include <iostream>

using namespace std;

//IMPRIMO CARACTERES COMO EN EL PROGRAMA MATRIX
void imprimirCaracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    imprimirCaracteres('@', 10);
    imprimirCaracteres('#', 5);
    cout << "Hola mundo!" << endl;
    imprimirCaracteres('*', 1000);
    

    system("pause");
    return 0;
}

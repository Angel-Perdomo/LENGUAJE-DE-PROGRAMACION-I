#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[5]; 

//EJEMPLO:
// int indice = 3;
// numeros[indice] = 50;
// cout << numeros[indice] << endl;
//**LE DIGO QUE LEA LA POSICION TRES, Y ES AHI DONDE ESTA EL VALOR 50.

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = i; //INDICE I -->>[i].
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << numeros[i] << endl;
        cout << endl;
    }
    

    system("pause");
    return 0;
}

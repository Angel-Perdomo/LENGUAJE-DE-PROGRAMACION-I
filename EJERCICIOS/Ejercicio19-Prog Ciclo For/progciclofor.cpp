#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Ira incrementando  sumando  mas 1, es decir (indice++).
    //En vez de hacerlo asi, se puede de esta forma (indice=indice+1).
    for (int indice = 1; indice < 10; indice++)
    {
        cout << "Valor de la variable indice: " << indice << endl;
    }

    system("pause");
    return 0;
}

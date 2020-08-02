#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    //INICIALIZA EL NUMERO RANDOM.

    srand(time(NULL));

    for (size_t i = 0; i < 10; i++)
    {
    //GENERA UN NUMERO ENTRE 1 Y 100 oh como quieran, EL % SE LE LLAMA MODULO.
    numero = rand() % 100 + 1;

    cout << endl;
    cout << "Primer numero al azar: " << numero;
    cout << endl;
    }
    
    
    system("pause");
    return 0;
}

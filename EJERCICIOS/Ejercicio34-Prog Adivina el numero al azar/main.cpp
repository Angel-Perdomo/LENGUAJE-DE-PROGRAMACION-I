#include <iostream>
#include <stdlib.h> //TIENE FUNCIONES -->> srand    /   rand
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 0;
    int miNumero = 0;

    //INICIALIZA EL NUMERO  RANDOM
    srand(time(NULL));

    //GENERA UN NUMERO ENTRE 1 Y 10.
    numeroSecreto = rand() % 10 + 1;

    do
    {
        cout << endl;
        printf("Adivina el numero entre 1 y 10: ");
        cin >> miNumero;
        cout << endl;

        if (numeroSecreto < miNumero)
        {
            cout << endl;
            printf("El numero secreto puede ser menor.");
            cout << endl;
        } else if (numeroSecreto > miNumero)
        {
            cout << endl;
            printf("El numero secreto puede ser mayor.");
            cout << endl;
        }
        
        

    } while (numeroSecreto != miNumero);

        cout << endl;
        cout << "Adivinastes el numero secreto!" << endl;
        cout << endl;
    

    return 0;
}

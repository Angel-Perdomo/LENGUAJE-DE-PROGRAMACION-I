#include <iostream>
#include <stdlib.h>
#include <time.h> //FUNCION RANDO


using namespace std;

int main(int argc, char const *argv[])
{

    
    
    int sumarMatriz[5][5];
    int numeroRando = 0;

    int totalSuma = 0;


    //INICIALIZA EL NUMERO  RANDOM
    srand(time(NULL));
    
    cout << endl;
    cout << "-----------------------------";
    cout << endl;
    
    for (int i = 0; i < 5; i++) //Recorrer filas.
    {
        for (int j = 0; j < 5; j++)
        {
            numeroRando = rand() % 1000 + 1;
            sumarMatriz[i][j] = numeroRando;
            numeroRando = 0;
            cout << "|"<<sumarMatriz[i][j]<<"|" << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------";
    cout << endl;

// RECORRER FILAS PARA SUMAR  
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalSuma += sumarMatriz[i][j];
        }
        
    }
    cout << endl;
    cout << "La suma de los elementos de la matriz es: " << totalSuma << endl;
    cout << endl;

   
    system("pause");
    return 0;
}

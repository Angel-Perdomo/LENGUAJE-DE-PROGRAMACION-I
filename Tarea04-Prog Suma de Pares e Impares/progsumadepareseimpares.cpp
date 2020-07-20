#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;
    
        cout << endl;
    cout << "---------------------------------------------------" << endl;

    for ( int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0) //USANDO MODULO (%).
        {
            pares = pares + i;
        } else if(i % 2 != 0)// ESTO != SIGNIFICA QUE ES IMPAR.
        {
            impares = impares + i;
        }
        
        total = pares + impares;

        cout << i << " ";
    }

    cout << endl;
    cout << "---------------------------------------------------";
    cout << endl;
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "Suma total de ambos: " << total << endl;
    cout << endl;
    cout << "---------------------------------------------------";
    cout << endl;
    
    system("pause");
    return 0;
}

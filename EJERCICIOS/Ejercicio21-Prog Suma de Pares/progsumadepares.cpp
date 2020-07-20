#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int pares = 0;
    
    for ( int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)//USANDO MODULO (%).
        {
            pares = pares + i;
        }
        
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
    cout << endl;
    

    system("pause");
    return 0;
}

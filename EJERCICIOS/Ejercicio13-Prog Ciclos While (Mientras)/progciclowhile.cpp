#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 2;

 //Mientras (Ciclo repetitivo)
 // Le preguntara varias veces hasta que "a" sea menor que "b".   
    while(a > b)
    {
        cout << "Ingrese el valor de a: ";
        cin >> a;
    }
    cout << endl;
    cout << "Saliste del ciclo!";

    system("pause");
    return 0;
}

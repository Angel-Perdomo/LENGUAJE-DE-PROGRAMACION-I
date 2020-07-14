#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << endl;
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota < 0)
    {
        cout << "Ingrese una nota entre 0 - 100:";
        return 0;
    }
    
    if (nota >= 95 && nota <= 100)
    {
        cout << "Obtuvistes una A";
        cout << endl;
    }
    if (nota >= 85 && nota <= 94)
    {
        cout << "Obtuvistes una B";
        cout << endl;
    }
    if (nota >= 75 && nota <= 84)
    {
        cout << "Obtuvistes una C";
        cout << endl;
    }
    if (nota >= 65 && nota <= 74)
    {
        cout << "Obtuvistes una D";
        cout << endl;
    }
    if (nota >= 60 && nota <= 64)
    {
        cout << "Obtuvistes una E";
        cout << endl;
    }
    if (nota < 60)
    {
        cout << "Obtuvistes una F";
        cout << endl;
    }

    system("pause");
    return 0;
}


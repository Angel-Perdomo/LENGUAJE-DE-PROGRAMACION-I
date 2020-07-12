#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10, b = 12, c = 7;

    if (a > 8 && b > 8 && c > 8)
    {
        cout << "Todos los numeros son mayores que 8." << endl;
    }
    if (a > 8 || b > 8 || c > 8)
    {
        cout << "Algun numero es mayor que 8." << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}

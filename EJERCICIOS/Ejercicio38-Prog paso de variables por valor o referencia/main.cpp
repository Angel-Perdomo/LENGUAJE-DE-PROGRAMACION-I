#include <iostream>

using namespace std;

    int sumar(int a, int b) //EJEMPLO 1
    {
        int resultado = 0;

        resultado = a + b;

        cout << endl;
        return resultado;
        cout << endl;
    }

//VOID es para no retornaar nada.         /         & SIGNIFICA QUE BUSQUE AHI
                                // & QUE BUSQUE EN MEMORIA LA MISMA DIRECCION.
void sumarConValoresPorReferencia(int a, int &b, int &resultado) //EJEMPLO 2
{
    a = 10;
    b = 12;

    resultado = a + b;
}

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 7;
    int r = 0;

    //sumar(num1, num2);

    sumarConValoresPorReferencia(num1, num2, r);

    cout << endl;
    cout << num1 << endl; //5, nadie lo toco en referencia
    cout << num2 << endl; // 12 por &b su direccion
    cout << r << endl; // 10 + 12 = 22
    cout << endl;

    system("pause");
    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << endl;
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;
    cout << endl;

    if (nota > 100 || nota < 0)
    {
        cout << "Ingrese una nota entre 0 - 100:" << endl;
        return 0;
    }
    
    if (nota >= 96 && nota <= 100)
    {
        cout << "Obtuvistes una S(A++)";
        cout << endl;
        cout << "Corresponde a un trabajo o examen perfecto. Trabajo muy bueno y sin errores.";
    }
    if (nota >= 95 && nota <= 94)
    {
        cout << "Obtuvistes una A+";
        cout << "Corresponde a un trabajo o examen bueno con pocas faltas.";
    }
    if (nota >= 86 && nota <= 90)
    {
        cout << "Obtuvistes una A";
        cout << "Realización con sólo errores menores.";
    }
    if (nota >= 80 && nota <= 84)
    {
        cout << "Obtuvistes una A-";
        cout << "Bastante bien.";
    }
    if (nota >= 76 && nota <= 80)
    {
        cout << "Obtuvistes una B+";
        cout << "A partir de este umbral se considera que el trabajo o examen es bueno.";
    }
    if (nota < 60)
    {
        cout << "Obtuvistes una B";
        cout << "Sobre la media pero con algunos errores.";
    }


    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << endl;
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;
    cout << endl;
    cout << "-----------------------------------------------------";
    cout << endl;

    if (nota > 100 || nota < 0)
    {
        cout << "Ingrese una nota entre 0 - 100:";
        cout << endl;
        return 0;
    }
    
    if (nota >= 96 && nota <= 100)
    {
        cout << "Obtuvistes una S(A++)";
        cout << endl;
        cout << "Corresponde a un trabajo o examen perfecto. Trabajo muy bueno y sin errores." << endl;
        cout << endl;
    }
    if (nota >= 90 && nota <= 95)
    {
        cout << "Obtuvistes una A+";
        cout << endl;
        cout << "Corresponde a un trabajo o examen bueno con pocas faltas." << endl;
    }
    if (nota >= 86 && nota <= 90)
    {
        cout << "Obtuvistes una A";
        cout << endl;
        cout << "Realización con sólo errores menores." << endl;
    }
    if (nota >= 80 && nota <= 84)
    {
        cout << "Obtuvistes una A-";
        cout << endl;
        cout << "Bastante bien." << endl;
    }
    if (nota >= 76 && nota <= 80)
    {
        cout << "Obtuvistes una B+";
        cout << endl;
        cout << "A partir de este umbral se considera que el trabajo o examen es bueno." << endl;
    }
    if (nota < 60)
    {
        cout << "Obtuvistes una B";
        cout << endl;
        cout << "Sobre la media pero con algunos errores." << endl;
    }
    cout << "-----------------------------------------------------";

    return 0;
}

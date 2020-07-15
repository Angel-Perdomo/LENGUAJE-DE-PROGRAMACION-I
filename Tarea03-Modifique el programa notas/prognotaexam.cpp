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
        cout << "Ingrese una nota entre 0 - 100:" << endl;
        cout << "-----------------------------------------------------";
        cout << endl;
        return 0;
    }
    if (nota >= 96 && nota <= 100)
    {
        cout << "Obtuvistes una S(A++)";
        cout << endl;
        cout << "Corresponde a un trabajo o examen perfecto. Trabajo muy bueno y sin errores." << endl;
    }
    if (nota >= 91 && nota <= 95)
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
    if (nota >= 81 && nota <= 85)
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
    if (nota >= 71 && nota <= 75)
    {
        cout << "Obtuvistes una B";
        cout << endl;
        cout << "Sobre la media pero con algunos errores." << endl;
    }
    if (nota >= 66 && nota <= 70)
    {
        cout << "Obtuvistes una B-";
        cout << endl;
        cout << "Esta es la calificación mínima aprobatoria." << endl;
    }
    if (nota >= 61 && nota <= 65)
    {
        cout << "Obtuvistes una C+";
        cout << endl;
        cout << "El trabajo es 'R' o 'Regular'." << endl;
    }
    if (nota >= 56 && nota <= 60)
    {
        cout << "Obtuvistes una C";
        cout << endl;
        cout << "Corresponde a un trabajo o examen normal." << endl;
    }
    if (nota >= 51 && nota <= 55)
    {
        cout << "Obtuvistes una C-";
        cout << endl;
        cout << "Esta dentro del umbral de aprobado." << endl;
    }
    if (nota >= 46 && nota <= 50)
    {
        cout << "Obtuvistes una D+";
        cout << endl;
        cout << "Un trabajo aceptable." << endl;
    }
    if (nota >= 41 && nota <= 45)
    {
        cout << "Obtuvistes una D";
        cout << endl;
        cout << "Malo, pero con carencias significativas." << endl;
    }
    if (nota >= 36 && nota <= 40)
    {
        cout << "Obtuvistes una D-";
        cout << endl;
        cout << "Corresponde a un trabajo más bien malo." << endl;
    }
    if (nota >= 31 && nota <= 35)
    {
        cout << "Obtuvistes una E+";
        cout << endl;
        cout << "...." << endl;
    }
    if (nota >= 26 && nota <= 30)
    {
        cout << "Obtuvistes una E";
        cout << endl;
        cout << "La realización alcanza el criterio mínimo." << endl;
    }
    if (nota >= 21 && nota <= 25)
    {
        cout << "Obtuvistes una E-";
        cout << endl;
        cout << "..." << endl;
    }
    if (nota >= 16 && nota <= 20)
    {
        cout << "Obtuvistes una F+";
        cout << endl;
        cout << "..." << endl;
    }
    if (nota >= 11 && nota <= 15)
    {
        cout << "Obtuvistes una F";
        cout << endl;
        cout << "..." << endl;
    }
    if (nota >= 6 && nota <= 10)
    {
        cout << "Obtuvistes una F";
        cout << endl;
        cout << "Es necesario mucho más trabajo." << endl;
    }
    if (nota >= 1 && nota <= 5)
    {
        cout << "Obtuvistes una F-";
        cout << endl;
        cout << "..." << endl;
    }
    if (nota >= 0 && nota <= 0)
    {
        cout << "Obtuvistes una F--";
        cout << endl;
        cout << "Muy Pobre , No tiene conocimiento alguno sobre el tema." << endl;
    }
    


    cout << "-----------------------------------------------------";

    return 0;
}

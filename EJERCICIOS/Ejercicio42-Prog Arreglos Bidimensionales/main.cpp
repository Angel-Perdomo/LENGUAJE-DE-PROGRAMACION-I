#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //       Filas[i][j]Columnas
    string nombres[3][2]; //**TRES filas DOS colummnas.**

    nombres[0][0] = "Juan"; //Fila 0, columna 0.
    nombres[0][1] = "Perez";

    nombres[1][0] = "Maria";
    nombres[1][1] = "Martinez";

    nombres[2][0] = "Pedro";
    nombres[2][1] = "Jimenes";

   // [i] son las filas, [j] son las colummnas.
    for (int i = 0; i < 3; i++) //Recorrer filas.
    {
        for (int j = 0; j < 2; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }

    //OTRA FORMA
    //for (int i = 0; i < 3; i++) //Recorrer filas.
    //{
    //    cout << nombres[i][0] << " " << nombres[i][1] << endl;
   // }
    
    
    system("pause");
    return 0;
}

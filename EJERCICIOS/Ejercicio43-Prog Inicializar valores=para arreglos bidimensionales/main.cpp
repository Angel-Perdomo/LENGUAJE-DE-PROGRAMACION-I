#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // OTRA FORMA DE DECLARAR FILAS Y COLUMNAS
    int filas = 3;
    int columnas = 2;
    
    string nombres[filas][columnas] =
    {
        {"Juan", "Perez"},
        {"Maria", "Martinez"},
        {"Pedro", "Jimenez"}
    };

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }
    
    
    system("pause");
    return 0;
}

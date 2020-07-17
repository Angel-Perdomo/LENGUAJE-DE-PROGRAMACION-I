#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
//COMO EJEMPLO EN ESTA OPCION USARE DOS LINEAS.
//CUANDO USAMOS DOS LINEAS, DEBEN USARSE LLAVES.        
    case 1:
    {
        cout << "Escogistes 1" << endl;
        cout << "Esta es otra linea de la opcion 1." << endl;
        break;
    }
    case 2:
        cout << "Escogistes 2" << endl;
        break;
    case 3:
        cout << "Escogistes 3" << endl;
        break;
    
    default:
            cout << "Escoja una opcion entre 1 y 3." << endl;
        break;
    }


    return 0;
}

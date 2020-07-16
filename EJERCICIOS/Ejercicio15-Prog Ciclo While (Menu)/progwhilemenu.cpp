#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true){
    system("cls");
    cout << "*****************************" << endl;
    cout << "MENU DE OPCIONES" << endl;
    cout << "*****************************" << endl;

    cout << endl;
    cout << "1 - Cafe y Granitas" << endl;
    cout << "2 - Reposteria" << endl;
    cout << "0 - Salir" << endl;

    cout << "Ingrese una opcion del menu: ";
    cin >> opcion;
    cout << endl; //HACE UN SALTO DE LINEA

    if (opcion == 1){
        system("cls"); //LIMPIA LA PANTALLA
        cout << "Este es el menu de cafes y granitas" << endl;
        system("pause"); //SE DETIENE CON UNA PAUSA
    }
    if (opcion == 2){
        system("cls");
        cout << "Este es el menu de reposteria" << endl;
        system("pause");
    }
    if (opcion == 0){
        break; //ESTE ME SACARA DEL CICLO INFINITO, ES COMO ROMPER EL CICLO.
    }

    }
    cout << endl;
    cout << "*****************************" << endl;
    cout << "Salistes del sistema." << endl;
    cout << "*****************************";
    cout << endl;

    return 0;
}

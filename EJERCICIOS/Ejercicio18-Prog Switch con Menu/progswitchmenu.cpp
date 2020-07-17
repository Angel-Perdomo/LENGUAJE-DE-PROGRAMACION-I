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

    
    if (opcion == 0)//SI ES CERO SE SALDRA DEL CICLO While.
    {
        break;
    }
    
    switch (opcion)
    {
    case 1:
    {
        system("cls"); //LIMPIA LA PANTALLA
        cout << "Este es el menu de cafes y granitas" << endl;
        system("pause"); //SE DETIENE CON UNA PAUSA
        break;
    }
    case 2:
    {
        system("cls");
        cout << "Este es el menu de reposteria" << endl;
        system("pause");
        break;
    }  

    default:{
            cout << "Ingrese una opcion valida entre 1 y 2.";
            system("pause");
            break;
             }
    
    }
}
cout << endl;
cout << "Salistes del sistema." << endl;
return 0;
}
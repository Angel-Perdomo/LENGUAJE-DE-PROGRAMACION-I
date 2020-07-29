#include <iostream>

using namespace std;

// Siempre arriba de la FUNCION Main.
int sumar(){
    return 5 + 7;
}

string nombreCompleto(){
    string nombre = "Juan";
    string apellido = "Perez";

    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nameyapellido = nombreCompleto();

    cout << resultado;
    cout << endl;

    cout << nameyapellido;
    cout << endl;

    return 0;
}

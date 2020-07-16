#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool ciclo = 0;

 //Pregunta de que si 0 es mayor que 100 y así sucesivamente.   
    while (ciclo < 1000000){
        cout << "*";

        ciclo = ciclo + 1;
//Primero vale cero, entonces sera 0+1, despuese 1+1, etc, hasta llegar a 100.
//PARA DETENER EL CICLO, PRESIONO Ctrl + C.        
    }
    
    
    
    system("pause");
    return 0;
}

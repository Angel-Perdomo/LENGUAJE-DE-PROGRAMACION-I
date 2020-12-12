#include <iostream>
#include <windows.h>

// Incluye la definición de la Clase Arma.
#include "interfazMain.h"

using namespace std;


//El Constructor, nos sirve para inicializar los atributos.
Arma::Arma(string pNombre, string pTipo, int pCapacidadDeMunicion)
{
    //Si vamos a inicializar hay que hacerle saber asi de esta forma.
    Nombre = pNombre;
    Tipo = pTipo;
    CapacidadDeMunicion = pCapacidadDeMunicion;
}

//Se pone asi Arma:: Para hacer saber que pertenece a la Clase Arma, por si hay mas Clases.
void Arma::establecerArma()
{    
    if (Nombre == "Sig_Sauer" || Nombre == "Bereta" || Nombre == "Smith_&_Wesson")
    {
        if (Tipo == "Pistola" || Tipo == "Rifle" || Tipo == "Ametralladora")
        {
            if (CapacidadDeMunicion >= 0 && CapacidadDeMunicion <= 50)
            {
            cout << endl;
            cout << "___________________________________________";
            cout << endl;
            cout << "Nombre del Arma: " << Nombre << endl;
            cout << "Tipo de Arma: " << Tipo << endl;
            cout << "Capacidad de Municion: " << CapacidadDeMunicion << endl;
            cout << endl;
            cout << "___________________________________________";
            cout << endl;
            }else
                 {
                 MessageBoxA(NULL,"Error! Capacidad de Municion no valida.","No se registro nada, vuelve a intentarlo.", MB_OK);
                 }  
        }else
             {
            MessageBoxA(NULL,"Error! Tipo de arma no valida.","No se registro nada, vuelve a intentarlo.", MB_OK);
             }
       
    }else
        {
        MessageBoxA(NULL,"Error! Nombre de arma no valida.","No se registro nada, vuelve a intentarlo.", MB_OK);
        }
     
    

    

}




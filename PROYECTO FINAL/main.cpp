#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>
//*********************
#include "animacion.h"
#include "cuestionario.h"
//*********************************

using namespace std;



int main(int argc, char const *argv[])
{
    ShowBar(); //ANIMACION MODERNA
    system("cls");
   
//*************************************************************************** 
   
int opcion = 0;

    while (true){
    system("COLOR 70");//[7]FONDO BLANCO, [0]TEXTO NEGRO
    system("cls");
    cout << "*****************************" << endl;
    cout << "MENU PRINCIPAL DEL JUEGO" << endl;
    cout << "*****************************" << endl;






    cout << endl;
    cout << "1 - Un jugador" << endl;
    cout << "2 - Varios jugadores" << endl;
    cout << "0 - Salir del juego" << endl;
    cout << endl;
    cout << "SELECCIONE UN MODO DE JUEGO: ";
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

    char juego;
    
   //**JUEGO

   cout<<"ENTER PARA INICIAR"<<endl;
    getch(); //animacion
    cargando();//animacion  
    system("cls");
   
    do
    {
   // [7|0] = el SIETE color de FONDO, El CERO es color de TEXTO.   	
    system("COLOR 70");
	string nombre;

	cout << endl;
	//cout << "____________________________________________________";
	cout << endl;
    //cout << "Ingrese su nombre participante " << contador << ":";
    cout << "Ingrese su nombre para comenzar: ";
    cin >> nombre;
    cout << endl;
     cout<<"ENTER PARA INICIAR"<<endl;
     system("cls");
	    
        cout << endl;
        cout << "PARTICIPANTE: " << nombre << endl;

        cout << "-----------------------------------------------" << endl;
        cout << "RESPONDE A CADA PREGUNTA!";
        cout << endl;
        
	    cuestionario();//CARGA LAS PREGUNTAS
        cout << endl;

        cout << "[ " << nombre << " ]" << endl;

    cout << "--------------------------------------------------";
    cout << endl << "GRACIAS POR JUGAR!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;

    cout<<"Presiona (S) para jugar de nuevo: " << endl;
    cout<<"Presiona (N) para salir: ";
    cin>>juego;
    if (juego =='n' || juego =='N')
    {
        break;
    }
            
	}while(juego == 's' || juego == 'S');

//FIN JUEGO**
        break;
    }
    case 2:
    {

    int numDeJugadores = 0;
    int contador = 1;

    cout<<"ENTER PARA INICIAR"<<endl;
    getch(); //animacion
    cargando();//animacion
    system("cls");

    cout << endl;
    cout << endl;
    cout << "Ingrese el numero de participantes: ";
    cin >> numDeJugadores;
    cout << endl;
    
    
   //**JUEGO
   
    do
    {
    	
    system("COLOR 02");
	string nombre;

	cout << endl;
	cout << "____________________________________________________";
	cout << endl;
    cout << "Ingrese su nombre participante " << contador << ":";
    cin >> nombre;
    cout << endl;
    system("cls");

        cout << "PARTICIPANTE: " << nombre << endl;        

        cout << "-----------------------------------------------" << endl;
        cout << "RESPONDE A CADA PREGUNTA!";
        cout << endl;
        
	    cuestionario();//CARGA LAS PREGUNTAS
        cout << endl;
        
    contador = contador + 1;

    cout << "PARTICIPANTE: " << nombre << endl;

    cout << "--------------------------------------------------";
    cout << endl << "GRACIAS POR PARTICIPAR!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;
    system("pause");   
	system("cls");    

	}while(contador == numDeJugadores);

    cout << endl;
    cout << "__________________________________________________";
    cout << endl << "FIN DEL JUEGO!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;
    system("pause");   
	system("cls"); 

//FIN JUEGO**
        break;
    }  

    default:{
            cout << endl;
            cout << "Ingrese una opcion valida entre 1 y 2.";
            system("pause");
            break;
             }
    
    }
}
cout << endl;
cout << "Salistes del juego." << endl;  
cout << endl;
cout << "******************************";
cout << endl; 
    
    
    
    system("pause");
    return 0;
}

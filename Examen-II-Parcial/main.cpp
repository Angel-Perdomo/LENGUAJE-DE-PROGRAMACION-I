#include<iostream>
#include<windows.h>
// 8) Crear las declaraciones necesarias en el archivo juegos.h 
// e incluir juegos.h en el programa main.cpp
#include "juego.h"

using namespace std;

int main()
{
	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;
	
	inicializarArreglo();
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);
        cout<<(char)4;	
	
	while(tecla != 27 && gameover() ){
	    proceso(tecla, puntos);
	}
	
	if ( !gameover()){
		MessageBoxA(NULL,"Has perdido","Perdedor", MB_OK);
		system("cls");
	}
	
	system("pause>NULL");
	return 0;
}
#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>

using namespace std;




//** LECTOR DE ARCHIVO DE TEXTO

int leerp1()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 1; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) { cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/ }
    contaPre++;
    }
        return EXIT_SUCCESS;
}

int leerres1()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 2; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
             contaRes++;
        }

        return EXIT_SUCCESS;
}

int leerp2()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 3; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}


int leerres2()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 4; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}

int leerp3()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 5; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres3()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 6; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp4()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 7; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres4()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 8; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp5()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 9; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres5()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 10; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp6()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 11; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres6()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 12; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp7()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 13; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres7()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 14; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp8()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 15; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres8()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 16; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp9()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 17; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres9()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 18; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp10()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 19; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres10()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 20; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }

        return EXIT_SUCCESS;
}
int leerp11()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 21; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres11()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 22; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }
        return EXIT_SUCCESS;
}
int leerp12()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 23; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres12()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 24; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }
        return EXIT_SUCCESS;
}
int leerp13()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 25; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres13()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 26; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }
        return EXIT_SUCCESS;
}
int leerp14()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 27; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres14()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 28; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }
        return EXIT_SUCCESS;
}
int leerp15()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaPre;
    int contaPre = 1; // CUENTA LAS LINEAS.
    int maxPre = 29; //LEER LINEA "X".
    while(getline(archivo_entrada, lineaPre)) {
    if(maxPre == contaPre) {cout << lineaPre << endl; /*MOSTRANDO LA LINEA.*/}
            contaPre++;
        }
return EXIT_SUCCESS;
}
int leerres15()
{
    ifstream archivo_entrada("preguntas.txt");;
    string lineaRes;
        int contaRes = 1; // CUENTA LAS LINEAS.
        int maxRes = 30; //LEER LINEA "X".
        while(getline(archivo_entrada, lineaRes)) {
        if(maxRes == contaRes) {cout << lineaRes << endl; /*MOSTRANDO LA LINEA.*/}
                contaRes++;
        }
        return EXIT_SUCCESS;
}

//FIN DE LECTOR DE TEXTO **













#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>
//*************************
#include "LectorDeArchivoTxt.h"


//*************************************


using namespace std;

void borrar(int a, int b)
{
    fflush(stdin);
    for(int i=a; i<=b; i++)
    {
        //gotoxy(1, i);
        //clreol();
    }
    fflush(stdin);
}

bool comprobarLetra(char letra)
{
	if(letra=='a' || letra=='b'	|| letra=='c' || letra=='d' || letra=='A' || letra=='B'	|| letra=='C' || letra=='D')
	{
		return true;
	}
	else
	{
		return false;
	}
}



int cuestionario()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, puntajeMaximo = 0;
        char p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15;
    //--------------------------------------------------------

    
        cout << endl;
        cout << "POR 85 PUNTOS" << endl;
        leerp1();
        leerres1();

        cout << "Indica tu respuesta: ";
        cin >> p1;
        if (p1 == 'a' || p1 == 'A')
        {n1 = 85;} else{n1 = 0;}
        while(!comprobarLetra(p1))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p1;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();

    //---------------------------------------------------------
        cout << endl;
        cout << "POR 85 PUNTOS" << endl;
        leerp2();
        leerres2();
        cout << "Indica tu respuesta: ";
        cin >> p2;
        if (p2 == 'b' || p2 == 'B')
        {n2 = 85;} else{n2 = 0;}
        while(!comprobarLetra(p2))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p2;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 90 PUNTOS" << endl;
        leerp3();
        leerres3();
        cout << "Indica tu respuesta: ";
        cin >> p3;
        if (p3 == 'b' || p3 == 'B')
        {n3 = 90;} else{n3 = 0;}
        while(!comprobarLetra(p3))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p3;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 100 PUNTOS" << endl;
        leerp4();
        leerres4();
        cout << "Indica tu respuesta: ";
        cin >> p4;
        if (p4 == 'd' || p4 == 'D')
        {n4 = 100;} else{n4 = 0;}
        while(!comprobarLetra(p4))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p4;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 75 PUNTOS" << endl;
        leerp5();
        leerres5();
        cout << "Indica tu respuesta: ";
        cin >> p5;
        if (p5 == 'b' || p5 == 'B')
        {n5 = 75;} else{n5 = 0;}
        while(!comprobarLetra(p5))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p5;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 40 PUNTOS" << endl;
        leerp6();
        leerres6();
        cout << "Indica tu respuesta: ";
        cin >> p6;
        if (p6 == 'b' || p6 == 'B')
        {n6 = 40;} else{n6 = 0;}
        while(!comprobarLetra(p6))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p6;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 40 PUNTOS" << endl;
        leerp7();
        leerres7();
        cout << "Indica tu respuesta: ";
        cin >> p7;
        if (p7 == 'd' || p7 == 'D')
        {n7 = 40;} else{n7 = 0;}
        while(!comprobarLetra(p7))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p7;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 100 PUNTOS" << endl;
        leerp8();
        leerres8();
        cout << "Indica tu respuesta: ";
        cin >> p8;
        if (p8 == 'd' || p8 == 'D')
        {n8 = 100;} else{n8 = 0;}
        while(!comprobarLetra(p8))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p8;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 100 PUNTOS" << endl;
        leerp9();
        leerres9();
        cout << "Indica tu respuesta: ";
        cin >> p9;
        if (p9 == 'b' || p9 == 'B')
        {n9 = 100;} else{n9 = 0;}
        while(!comprobarLetra(p9))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p9;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 20 PUNTOS" << endl;
        leerp10();
        leerres10();
        cout << "Indica tu respuesta: ";
        cin >> p10;
        if (p10 == 'c' || p10 == 'C')
        {n10 = 20;} else{n10 = 0;}
        while(!comprobarLetra(p10))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p10;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 200 PUNTOS" << endl;
        leerp11();
        leerres11();
        cout << "Indica tu respuesta: ";
        cin >> p11;
        if (p11 == 'c' || p11 == 'C')
        {n11 = 200;} else{n11 = 0;}
        while(!comprobarLetra(p11))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p11;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 80 PUNTOS" << endl;
        leerp12();
        leerres12();
        cout << "Indica tu respuesta: ";
        cin >> p12;
        if (p12 == 'b' || p12 == 'B')
        {n12 = 80;} else{n12 = 0;}
        while(!comprobarLetra(p12))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p12;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 300 PUNTOS" << endl;
        leerp13();
        leerres13();
        cout << "Indica tu respuesta: ";
        cin >> p13;
        if (p13 == 'c' || p13 == 'C')
        {n13 = 300;} else{n13 = 0;}
        while(!comprobarLetra(p13))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p13;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 100 PUNTOS" << endl;
        leerp14();
        leerres14();
        cout << "Indica tu respuesta: ";
        cin >> p14;
        if (p14 == 'a' || p14 == 'A')
        {n14 = 100;} else{n14 = 0;}
        while(!comprobarLetra(p14))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p14;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 250 PUNTOS" << endl;
        leerp15();
        leerres15();
        cout << "Indica tu respuesta: ";
        cin >> p15;
        if (p15 == 'a' || p15 == 'A')
        {n15 = 250;} else{n15 = 0;}
        while(!comprobarLetra(p15))
		        {        	
		        	//borrar(14, 24);
		        	//gotoxy(1, 14);
                    cout << endl;
			        cout<<"OPCION INVALIDA"<<endl<<endl<<"S U   R E S P U E S T A  :   ";
			        cin>>p15;
			        //fflush(stdin);
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        system("COLOR 6");
        system("cls");
        puntajeMaximo = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12;
        cout << endl;
        cout << "Tu puntaje maximo es: " << puntajeMaximo << endl;
        //cout << endl;
}

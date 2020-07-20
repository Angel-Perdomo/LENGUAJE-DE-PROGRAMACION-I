#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //INCREMENTO
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    //DECREMENTO
    for (int i = 9; i >= 0; i--)
    {
        cout << i << " ";
    }
    
    cout << endl;
    cout << endl;

    //EL BREAK ES PARA CUANDO LLEGUE A 115 PARE.
    for (int i = 0; i < 1000000; i++)
    {
        cout << i << " ";
        if (i == 115)
        {
            break;
        }
        
    }

    cout << endl;
    cout << endl;

    
    // CONTINUE se salta ese numero(5, 7), 
    //SINO QUE INCREMENTE EL CICLO NUEVAMENTE DESPUES DE ESE NUMERO(5, 7).
    for (int i = 0; i < 10; i++)
    {
        if (i == 5 || i == 7)
        {
            continue;
        }
        cout << i << " ";
        
    }

    cout << endl;

    system("pause");
    return 0;
}


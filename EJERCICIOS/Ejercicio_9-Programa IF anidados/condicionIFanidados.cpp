#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;

    cout << endl;
    cout << "Ingrese a: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese b: ";
    cin >> b;
    cout << endl;

    cout << "Ingrese c: ";
    cin >> c;
    cout << endl;


    cout << "---------------------------------";
    cout << endl;
    
    if (a > b)
    {
        if (a > c)
        {
            cout << "A es mayor" << endl;
        } else
        {
            cout << "C es mayor" << endl;
        }  
        
    } else
    {
        if (b > c)
        {
            cout << "B es mayor" << endl;
        } else
        {
            cout << "C es mayor" << endl;
        } 
    }
    cout << "---------------------------------";
    

    system("pause");
    return 0;
}

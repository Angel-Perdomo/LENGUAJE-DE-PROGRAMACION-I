#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int a = 5, b = 10, c = 7;

    if (a > b && a > c)
    {
        cout << "A es el mayor: " << a << endl;
    } 
    if(b > a && b > c)
    {
        cout << "B es el mayor: " << b << endl;
    } 
    if(c > a && c > b)
    {
        cout << "C es el mayor: " << c << endl;
    }
    
    
    
    system("pause");
    return 0;
}

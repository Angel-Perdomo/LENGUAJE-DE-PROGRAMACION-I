#include <iostream>

using namespace std;

int fib(int n) //Fibonacci
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
    
}

int main(int argc, char const *argv[])
{
    cout << endl;
    cout << fib(9); //ESE 9 SIGNIFICA QUE LLEGARA HASTA ESA POSICIÓN.
    cout << endl;   //PUEDO PONER LA POSICIÓN QUE YO QUIERA.

    system("pause");
    return 0;
}

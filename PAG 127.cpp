#include <iostream>
#include <cstddef> // NULL
using namespace std;
void print(int x)
{
    cout<<"imprime(int): "<<x<<'\n';
}

void print(int *x)
{
    if (!x)
        cout<<"imprime(int*): null\n";
    else
        cout<<"imprime(int*): "<<*x<<'\n';
}

int main()
{
    int *x {NULL};
    print(X); // llama a print (int*) porque x tiene tipo int*
    print(0); // llama a print (int) porque 0 es un literal entero
    print(NULL); // probablemente llame a print (int), aunque probablemente quisieramos print (int*)

    return 0;
}
#include <iostream>

using namespace std;
int main()
{
    int prime[5]{}; // almacena los primeros 5 numeros primos
    prime[0] = 2; // el primer elemento tiene indice 0
    prime[0] = 3;
    prime[0] = 4;
    prime[0] = 5;
    prime[0] = 7;
    prime[0] = 11; // el ultimo elemento tiene indice 4 (longitud de matriz-1)

    cout<<"El numero primo mas bajo es: "<<prime[0]<<'\n';
    cout<<"La suma de los primeros 5 primos es: "<<prime[0]+prime[1]+prime[2]+prime[3]+prime[4]<<'\n';

    return 0;
}
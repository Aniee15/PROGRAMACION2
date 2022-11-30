#include <iostream>
using namespace std;
void passValue(int value) // el valor es una copia del argumento
{
    value = 99; // asi que cambiarlo aqui no cambiaria el valor del argumento
}
void passArray(int prime[5]) // prime es el arreglo real
{
    prime[0] = 11; // asi que cambiarlo aqui cambiaria el argumento original.
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}
int main()
{
    int value{ 1 };
    cout<<"antes de passValue: "<<value<<'\n';
    passValue(value);
    cout<<"despues de passValue: "<<value<<'\n';

    int prime[5]{ 2, 3, 5, 7, 11 };
    cout<<"antes de passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';
    passArray(prime);
    cout<<"despues de passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';

    return 0;
}
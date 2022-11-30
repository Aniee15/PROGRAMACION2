#include <iostream>

using namespace std;

int main()
{
    int v {5};
    int *ptr {&v}; // inicializar ptr con la direccion de la variable v

    cout<<&v<<'\n'; // imprime la direccion de la variable v
    cout<<ptr<<'\n'; // imprime la direccion que tiene ptr

    return 0;
}
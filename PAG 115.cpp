#include <iostream>
// lo veremos despues. no se preocupe por ahora,
// solo lo usamos para engañar al compilador para que piense que p tiene un valor.
void foo (int *&)
{
    // p es una referencia a un puntero
    // estamos usando esto para engañar al compilador haciendole pensar que p podria modificarse,
    // por lo que no se quejara de que p no este inicializado
    // esto no es algo que quieras hacer intencionalmente
}

int main()
{
    int *p; // crea un puntero no inicializado (que apunta a basura)
    foo (p); // engañar al compilador para que piense que vamos a asignarle un valor valido

    std::cout<< * p << '\n'; // indireccion a traves del puntero de basura

    return 0;
}
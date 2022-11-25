#include <iostream>
#include <random> // para std::mt19937
#include <ctime>

int main()
{
    // inicializa mersenne twister
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    // cree un generador de numeros aleatorios reutilizable que generen numeros uniformes entre 1 y 6
    std::uniform_int_distribution die{ 1, 6 };
    // si su compilador no es compatible con c++ 17, use esto
    // std::uniform_int_distribution<>die {1, 6};

    for (int count{ 1 }; count <= 48; ++count)
    {
        std::cout << die(mersenne) << '\t';

        if (count % 6 == 0)
            std::cout << '\n';
    }

    return 0;
}
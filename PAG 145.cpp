#include <cstdint>
#include <iostream>

int main()
{
    std::int16_t x{}; // x is de 16 bits, -32768 to 32767
    std::cout<<"Ingrese un numero entre -32768 y 32767: ";
    std::cin>>x;

    std::int16_t y{}; // x is de 16 bits, -32768 to 32767
    std::cout<<"Ingrese otro numero entre -32768 y 32767: ";
    std::cin>>y;

    std::cout << "la suma es: "<< x + y << '\n';
    return 0;
}
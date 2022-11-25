#include <iostream>

doubkle getDouble()
{
    while (true)
    {
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin >> x;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout<<"Oops, ingreso no valido. intente de nuevo.\n";
    } 
    else
    {
        std::cin.ignore(32767, '\n');
        return x;
    }
    }
}
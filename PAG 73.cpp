#include <iostream>
#include <iterator>

int main()
{
    char name[255]; // declarar una matriz lo suficientemente grande para contener 255 caracteres
    std::cout<<"ingrese su nombre: ";
    std::cin.getline(name, std::size(name));
    std::cout<<"ingresaste: "<<name<<'\n';

    return 0;
}
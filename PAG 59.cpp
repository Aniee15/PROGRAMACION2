#include <iostream>
#include <limits>
int main()
{
    int age{};
    while (true)
    {
        std::cout<<"ingresa tu edad: ";
        std::cin>>age;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (age <= 0)
            continue;

        break;
    }

    std::cout<<"ingresaste: "<<age<<'\n';
}
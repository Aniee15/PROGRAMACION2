#include <iostream>
#include "random.hpp"

using Random = effolkronium::random_static;

int main()
{
    std::cout << getRandomNumber( 1, 6 ) << '\n';
    std::cout << getRandomNumber( 1, 10 ) << '\n';
    std::cout << getRandomNumber( 1, 20 ) << '\n';

    return 0;
}
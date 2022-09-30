#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void printResult(int z)
{
    std::cout<<"la respuesta es: "<<z<<endl;
}

int getUserInpurt()
{
    std::cout<<"ingrese un numero: ";
    int x{};
    std::Cin>>x;
    return --x;
}

int main()
{
    int x{getUserInput()};
    int y{getUserInput()};
    
    int z{add(x,y)};
    printResult{z}
    
    return 0;
}

#include <iostream>
bool isEqual(int x, int y)
{
	return(x==y);
}
int main()
{
		
std::cout<<" Ingrese un entero ";
int x {};
std::cin>>x;

std::cout<<" Ingrese otro entero ";
int y{};
std::cin>>y;

std::cin>>y;

std::cout<<std::boolalpha;
std::cout<<x<<" y "<<y<<" son iguales?";
std::cout<< isEqual(x,y);

return 0;
}




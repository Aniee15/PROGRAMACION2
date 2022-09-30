#include <iostream>

int getValueFromUser()
{
	std::cout<<"ingrese un entero: ";
	int input{};
	std::cin>>input;
	
	return input;
}

int main()
{
	int x{getValueFromUser()}; // primera llamada a getValueFromUser
	int y{getValueFromUser()}; // segunda llamada a getValueFromUser
	
	std::cout<<x<<" + "<<y<<"-"<<x + y<<'\n';
	
	return 0;
}

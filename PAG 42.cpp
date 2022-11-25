#include <iostream>

int getUserInput()
{
	int i{};
	std::cin >> i;
	return i;
}

int main()
{
	std::cout << "Cuantas manzanas te comiste hoy? \n";
	
	if (int iAppleEaten{ getUserInput() } ; iAppleEaten <= 2)
	{
		std::cout << "Yummy\n";
	}
	else
	{
		std::cout << iAppleEaten << " son muchas!\n";
	}
	
	return 0;
}
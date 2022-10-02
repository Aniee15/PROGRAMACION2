#include <iostream>

int main()
{
	std::cout << true << '\n'; // true --> 1
	std::cout << !true << '\n'; // !true --> 0
	
	bool b{false};
	std::cout << b << '\n'; // b --> 0
	std::cout << !b << '\n'; // !b --> 1
	return 0;
}
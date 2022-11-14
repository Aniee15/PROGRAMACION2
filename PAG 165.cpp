#include <iostream>

void addAndPrint(auto x, auto y) // valido a partir de c++20
{
	std::cout << x + y;
}

int main()
{
	addAndPrint(2, 3); // int
	addAndPrint(4.5, 6.7); // double
}
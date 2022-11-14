#include <iostream>
#include <typeinfo> // typeid()

int main()
{
	short a{ 4 };
	short b{ 5 };
	std::cout << typeid(a + b).name() << ' ' << a + b << '\n';
	
	return 0;
}
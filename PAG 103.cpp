#include <iostream>
struct Employee
{
	short id;
	int age;
	double wage;
};
void printInformation(Employee employee)
{
	std::cout << "ID:	" << employee.id << '\n';
	std::cout << "Age:	" << employee.age << '\n';
	std::cout << "Wage:	" << employee.wage << '\n';
}

int main()
{
	Employee joe { 14, 32, 24.15 };
	Employee maria { 15, 28, 18.27 };
	
	printInformation(joe);
	
	std::cout << '\n';
	
	printInformartion(maria);
	
	return 0;
}
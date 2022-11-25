struct Employee
{
	short id;
	int age;
	double wage;	
};

int main()
{
	std::cout << "El tamano de Employee es " << sizeof(Employee) << '\n';
	
	return 0;
}
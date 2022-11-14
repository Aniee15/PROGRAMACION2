#inlcude <iostream>
namespace constants
{
	constexpr double gravity { 9.8 };
}

double instantVelocity(int time)
{
	return constants::gravity * time;
}

int main()
{
	std::cout << instanVelocity(5);
}
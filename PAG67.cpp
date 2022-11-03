#include <cmath> // std::abs
#include <algorithm> // std::max

// regresa true si la diferencia entre a y b esta dentro del porcentaje epsilon del numero mayor de a y b
bool approximatelyEqual(double a, double b, double epsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	// comprueba si los numeros estan realmente cerca; es necesario cuando se comparan numeros cercanos a cero
	double diff{ std::abs(a - b) };
	if (diff <= absEpsilon)
		return true;
		
	// de lo contrario, recurra al algoritmo de knuth
	return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{
	std::cout << approximatelyEqual(a, 1.0, 1e-8) << '\n';
	std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << '\n';
	std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << '\n';
}
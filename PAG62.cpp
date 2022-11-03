#include <cmath> // std::abs
#include <algorithm> // std::max

// regrese true si la diferencia entre a y b estan dentro del porcentaje epsilon del numero mayor de a y b
bool approximatelyEqual(double a, double b, double epsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}
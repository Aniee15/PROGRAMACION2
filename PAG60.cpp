#include <cmath> // para std::abs()

// epsilon es un valor absoluto
bool isAlmostEqual (double a, double b, double epsilon)
{
	// si la distancia entre a b es menor que epsilon, entonces a y b estan "lo suficientemente cerca"
	return std::abs (a - b) <= epsilon;
}
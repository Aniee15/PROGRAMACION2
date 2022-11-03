bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	// comprueba si los numeros estan realmente cerca; es necesario cuando se comparan numeros cercanos a cero
	double diff{ std::abs(a - b) };
	if (diff <= absEpsilon)
		return true;
		
	// de lo contrario, recurra al algoritmo de knuth
	return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}
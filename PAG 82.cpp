int pow(int base, int exponent)
{
	int total{ 1 };
	
	for (int count{ 0 }; count < exponent; ++count)
		total *= base;
		
	return total;
}
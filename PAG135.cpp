#include <biset>
#include <iostream>

int main()
{
	// std::bitset<8> queremos alamcenar 8 bits
	std::bitset<8> bin1{ 0b1100`0101 }; // literal binario 1100 0101
	std::bitset<8> bin2{ 0xc5 }; // literal hexadecimal a 1100 0101
	
	std::cout << bin1 << ' ' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // podemos imprimir directamente de std::bitset
	
	return 0;
}
#include <iostream>

int main()
{

	std::cout<<" Ingrese un caracter: "; // se ingresa abcd
	char ch{};
	std::cin>>ch;//ch='a',"bcd" se queda en la cola.
	std::cout<< ch <<" tiene el codigo ASCII "<< static_cast<int>(ch)<<'\n';
	
	// NOTA: El siguiente cin no solicita al usuario una entrada,!toma la entrada en la cola!
	std::cin>>ch;//ch = 'b', "cd" queda en la cola.
	std::cout<<ch<<" tiene el codigo ASCII "<<static_cast<int>(ch)<<'\n';
	
	return 0;
	
}



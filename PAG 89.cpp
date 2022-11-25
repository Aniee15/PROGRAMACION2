for (int count { 0 }; count < 10; ++count) // count se define aqui
	std::cout << count  << ' ';
	
// count no se destruye en compiladores antiguos

std::cout << '\n';
std::cout << " el contador es: " << count << '\n'; // se puede usar
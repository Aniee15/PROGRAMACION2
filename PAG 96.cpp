int totalAge{ joe.age + maria.age };

if (joe.wage > maria.wage)
	std::cout << "Joe gana mas que maria\n";
else if (joe.wage < maria.wage)
	std::cout << "Joe gana menos que maria\n";
else
	std::cout << "Joe y maria ganan lo mismo\n";
	
// maria tiene un aumento
maria.wage += 2.50;

// cumpleaños de joe
++joe.age;
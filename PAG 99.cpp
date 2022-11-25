for (int count { 0 }; count < 20; ++count)
{
	// si el numero es divisible por 4, omita esta iteracion
	if ((count % 4) == 0)
		continue; // saltar al final del cuerpo del ciclo
		
	// si el numero no es divisible por 4, continua
	std::cout << count << std::endl;
	
	// la declaracion de continue salta aqui
}
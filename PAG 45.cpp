switch (1)
{
	int a; // ok
	int b{ 5 }; // illegal, no se permite la iniciallizacion antes de las etiquetas case
	
	case 1:
		int y; // ok, la declaracion esta permitida dentro de case
		y = 4; // ok, se permiten asignaciones
		break;
		
	case 2:
		y = 5; // ok, y fue declarada antes
		break;
	
	case 3:
		int z{ 4 }; // ilegal, la inicializacion no esta permitida dentro de un case
		break;
		
	default:
		std::cout << "default case\n";
		break;
}
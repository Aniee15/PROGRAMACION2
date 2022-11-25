switch (1)
{
	case 1:
		{ // definimos un bloque
			int x{ 4 }; // ok, variables puedes ser inicializados en un bloque case
			std::cout << x;
			break;
		}
		default:
			std::cout << "default case\n";
			break;
}
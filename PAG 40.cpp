switch (2)
{
	case 1:
		std::cout << 1 << '\n';
		[[fallthrough]];
	case 2: // coincide!
		std::cout << 2 << '\n';
		[[fallthrough]];
	case 3:
		std::cout << 3 << '\n';
		[[fallthrough]];
	case 4:
		std::cout << 4 << '\n';
		[[fallthrough]];
	default: 
		std::cout << 5 << '\n';
}
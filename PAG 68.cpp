enum Color
{
	color_black, // 0
	color_red, // 1
	color_blue, // 2
	color_green, // 3
	color_white, // 4
	color_cyan, // 5
	color_yellow // 6
	color_magenta // 7	
};
void printColor(color color)
{
	if (color == color_black)
		std::cout << "Black";
	else if (color == color_red)
		std::cout << "Red";
	else if (color == color_blue)
		std::cout << "Blue";
	else if (color == color_green)
		std::cout << "Green";
	else if (color == color_white)
		std::cout << "White";
	else if (color == color_cyan)
		std::cout << "Cyan";
	else if (color == color_yellow)
		std::cout << "Yellow";
	else if (color == color_magenta)
		std::cout << "Magenta";
	else
		std::cout << "Quien sabe!";
}
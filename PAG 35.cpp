bool isDigit(char c)
{
	switch (c)
	{
		case '0': // if c es 0
		case '1': // 0 if c es 1
		case '2': // 0 if c es 2
		case '3': // 0 if c es 3
		case '4': // 0 if c es 4
		case '5': // 0 if c es 5
		case '6': // 0 if c es 6
		case '7': // 0 if c es 7
		case '8': // 0 if c es 8
		case '9': // 0 if c es 9
			return true; // return true
		default:
				return false;
	}
}
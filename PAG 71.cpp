int readFileContents()
{
	if (!openFile())
		return -1;
	if (!readFile())
		return -2;
	if (!parseFile())
		return -3;
		
	return 0; // success
}
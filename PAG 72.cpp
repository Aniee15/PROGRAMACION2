enum parseResult
{
	success,
	error_opening_file,
	error_reading_file,
	error_parsing_file
};

parseResult readFileContents()
{
	if (!openFile())
		return error_opening_file;
	if (!readFile())
		return error_reading_file;
	if (!parseFile())
		return error_parsing_file;
	
	return success;
}
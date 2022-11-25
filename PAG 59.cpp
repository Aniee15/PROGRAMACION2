enum color
{
	red,
	blue, // blue esta en el global namespace
	green
};

enum Feeling 
{
	happy,
	tired,
	blue // error, blue ya esta siendo usado en el enum color en el global namespace
};
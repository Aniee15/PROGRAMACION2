int main()
{
	goto skip; // salto invalido
	int x = 5;
skip:
	x += 3; // que evaluaria esto?
	return 0;
}
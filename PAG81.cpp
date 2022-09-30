#include <iostream>

void d()
{ // aqui
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();
	
	return 0;
}

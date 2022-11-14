int main()
{
	{
		using namespace Foo;
		// llamadas a Foo::
	} // using namespace Foo expira
	
	{
		using namespace Goo;
		// llama a Goo::
	} // using namespace Goo expira
	
	return 0;
}
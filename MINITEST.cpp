#include <iostream>
using namespace std;
int main()
{
	cout<<2 + 3<< '\n';
	
	int x{6};
	int y{x - 2};
	cout<<y<< '\n';
	
	int z{0};
	z = x;
	cout<<z - x<< '\n';
	
	return 0;
}

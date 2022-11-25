#include <iostream>
struct Point3d
{
	double x;
	double y;
	double z;	
};
Point3d getZeroPoint()
{
	Point3d temp { 0.0, 0.0, 0.0 };
	return temp;
}
Point3d getZeroPoint2()
{
	return { 0.0, 0.0, 0.0 };
}
Point3d getZeroPoint3()
{
	return {};
}
int main()
{
	Point zero{ getZeroPoint() };
	
	if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
		std::cout << "Este punto es cero\n";
	else 
		std::cout << "Este punto no es cero\n";
		
	return 0;
}
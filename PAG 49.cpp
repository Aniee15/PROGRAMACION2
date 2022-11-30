#include <algorithm> // std::swap
#include <iostream>
using namespace std;
int main()
{
    int x{ 2 };
    int y{ 4 };
    cout<<"antes del intercambio: x = "<<x<<", y = "<<y<<'\n';
    swap(x,y);
    cout<<"despues del intercambio: x = "<<x<<", y = "<<y<<'\n';
}
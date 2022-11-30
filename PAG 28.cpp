#include <iostream>
#include <iterator> // std::size

using namespace std;

int main()
{
    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
    cout<<"el arreglo tiene: "size(array)<<" elementos\n";

    return 0;
}
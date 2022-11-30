#include <iostream>
using namespace std;
void printSize(int *array)
{
    cout<<sizeof(array)<<'\n';
}

int main()
{
    int array[5]{ 1, 1, 2, 3, 5, 8, 13, 21 };
    cout<<sizeof(array)<<'\n';

    printSize(array);

        return 0;
}
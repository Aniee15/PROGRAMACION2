#include <iostream>
using namespace std;
int main()
{
    int array[5]{ 9, 7, 5, 3, 1 };

    cout<<"elemento 0 has address: "<<&array[0]<<'\n';

    cout<<"la matriz decae para almacenar una direccion de memoria: "<<array<<'\n';

    return 0;
}
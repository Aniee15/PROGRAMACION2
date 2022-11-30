#include <iostream>
#include <cstddef> // std::nullptr_t
using namespace std;
void doSomething(nullptr_t ptr)
{
    cout<<"dentro de doSomething()\n";
}

int main()
{
    doSomething(nullptr);

    return 0;
}
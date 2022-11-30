#include <iostream>
#include <string>

using namespace std:

int main()
{
    char text[]{ "hola" };
    string str{ text };
    string more{ str };

    cout<<text<<' '<<str<<' '<<more<<'\n';

    return 0;
}
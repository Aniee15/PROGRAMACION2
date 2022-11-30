#include <iostream>
#include <string>
#include <string_view>

using namespace std;

string_view askForName()
{
    cout<<"cual es tu nombre>\n";

    string str{};
    cin>>str;

    string_view view{ str };

    cout<<"hola"<<view<<'\n';

    return view;
}

int main()
{
    string_view view{ askForName() };

    cout<<"tu nombre es "<<view<<'\n'; // comportamiento indefinido

    return 0;
}
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

void print(string s)
{
    cout<<s<<'\n';
}

int main()
{
    string_view sv{ "pelota" };

    sv.remove_suffix(3);

    string str{ sv }; // ok

    print(str); // ok

    print(static_cast<string>(sv)); // ok

    return 0;
}
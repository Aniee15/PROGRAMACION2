#include <iostream>
#include <string_view>

using namespace std;

int main()
{
    string_view str{ "los trenes son rapidos!" };

    cout<<str.lenght()<<'\n'; // 16
    cout<<str.substrc(0, str.find(' '))<<'\n'; // trenes
    cout<<(str == "los trenes son rapidos!")<<'\n'; // 1

    cout<<str.starts_with("Botes")<<'\n'; // 0
    cout<<str.ends_with("rapidos!")<<'\n'; // 1

    cout<<str<<'\n'; // los trenes son rapidos!

    return 0;
}
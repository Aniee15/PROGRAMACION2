#include <cstring>
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main()
{
    string_view sv{ "pelota" };

    sv.remove_suffix(3);

    string str{ sv };

    auto szNullTerminated{ str.c_str() };

    cout<<str<<" tiene "<<strlen(szNullTerminated)<<" letra(s)\n";

    return 0;
}
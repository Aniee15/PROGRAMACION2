#include <iostream>
#include <string_view>

using namespace std;

int main()
{
    char arr[]{ "Gold" };
    string_view str{ arr };

    cout<<str<<'\n';

    arr[3] = 'f';
    
    cout<<str<<'\n';

    return 0;
}
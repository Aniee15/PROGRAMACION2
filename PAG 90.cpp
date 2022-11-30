#include <iostream>
#include <string_view>

using namespace std;

int main()
{
    string_view str{ "Manzana" };

    cout<<str<<'\n';

    str.remove_prefix(1);

    cout<<str<<'\n';

    str.remove_suffix(2);

    cout<<str<<'\n';

    return 0;
}
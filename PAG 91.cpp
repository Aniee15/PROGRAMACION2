#include <iostream>
#include <iterator>
#include <string_view>

using namespace std;

int main()
{
    // sin tener null
    char vowels[]{ 'a', 'e', 'i', 'o', 'u' };

    string_view str{ vowels, size(vowels) };

    cout<<str<<'\n';

    return 0;
}
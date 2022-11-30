#include <iostream>
#include <string_view>

using namespace std;

int main()
{
    string_view text{ "hola" }; // vista el texto "hola", que se almacena en el binario
    string_view str{ text }; // vista del mismo texto "hola"
    string_view more{ str }; // vista del mismo texto "hola"

    cout<<text<<' '<<str<<' '<<more<<'\n';

    return 0;
}
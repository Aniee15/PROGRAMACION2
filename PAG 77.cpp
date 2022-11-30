#include <iostream>
#include <cstring>
#include <iterator>

using namespace std;
int main()
{
    char name[20]{ "Geovany" }; //
    cout<<"Mi nombre es: "<<name<<'\n';
    cout<<name<<" tiene "<<strlen(name)<<" letras.\n";
    cout<<name<<" tiene "<<size(name)<<" caracteres en el arreglo.\n";

    return 0;
}
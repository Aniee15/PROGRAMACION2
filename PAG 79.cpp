#include <cstring>
#include <iostream>
#include <iterator>

using namespace std;
int main()
{
    char buffer[255];
    cout<<"ingrese una cadena: ";
    cin.getline(buffer, size(buffer));

    int spacesFound{ 0 };
    int bufferLenght{ static_cast<int>(strlen(buffer)) };
    for (int index{ 0 }; index < bufferLenght; ++index)
    {
        if (buffer[index] == ' ')
            ++spacesFound;
    }

    cout<<"Ingresaste "<<spacesFound<<" espacios!\n";

    return 0;
}
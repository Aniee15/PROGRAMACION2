#include <fstream>
#include <iostream>
int main()
{
    std::ofstream outf{ "sample.dat" };

    if (!outf) // verdadero si no se pudo abrir o crear el archivo
    {
        // print an error and exit
        std::cerr << "uh oh, sample.dat no puede ser abierto en modo escritura!"<<std::endl;
        return 1;
    }

    outf<<"esta es la linea 1"<<'\n';
    outf<<"esta es la linea 2"<<'\n';

    return 0;
}
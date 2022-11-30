#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::ifstream inf{ "sample.dat" };
    if (!inf)
    {
        std::cerr<<"uh oh, sample.dat no se puede abrir para escritura!"<<std::endl;
        return 1;
    }
    while (inf)
    {
        std::string strInput;
        std::getline(inf, strInput);
        std::cout<<strInput<<'\n';
    }

    return 0;
}
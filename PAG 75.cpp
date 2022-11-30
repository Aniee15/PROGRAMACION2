#include <fstream>
#include <iostream>
int main()
{
    std::ofstream outf{ "sample.dat", std::ios::app };
    if (!outf)
    {
        std::cerr<<"uh oh, sample.dat no se puede abrir para escritura!"<<std::endl;
        return 1;
    }
    
    outf<<"This is line 3"<<'\n';
    outf<<"This is line 4"<<'\n';
    
    return 0;
}
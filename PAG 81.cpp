int main()
{
    std::ifstream inf{ "sample.dat" };
    if (!inf)
    {
        std::cerr<<"uh oh, sample.dat no puede ser abierto en modo escritura!\n";
        return 1;
    }

    std::string strData;

    inf.seekg(5);
    getline(inf, strData);
    std::cout<<strData<<'\n';

    inf.seekg(8, ios::cur);
    std::getline(inf, strData);
    std::cout<<strData<<'\n';

    inf.seekg(-15, ios::end);
    std::getline(inf, strData);
    std::cout<<strData<<'\n';

    return 0;
}
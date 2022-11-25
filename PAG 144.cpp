doubkle getDouble()
{
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin >> x;
    if (std::cin.fail())
    {
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return x;
    }
    return x;
}
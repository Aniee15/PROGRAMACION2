doubkle getDouble()
{
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin >> x;
    std::cin.ignore(32767, '\n');
    return x;
}
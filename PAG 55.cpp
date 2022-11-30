int main()
{
    std::string phoneNumber{};

    do
    {
        std::cout<<"Ingrese su numero telefonico (###) ###-####: ";
        std::getline(std::cin, phoneNumber);
    } while (!inputMatches(phoneNumber, "(###) ###-####"));

    std::cout<<"ingresaste: "<<phoneNumber<<'\n';
}
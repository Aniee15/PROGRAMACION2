int main()
{
    int age{};
    while (true)
    {
        std::cout<<"Ingresa tu edad: ";
        std::string strAge{};
        std::cin>>strAge;

        if (auto extracted{ extractAge(strAge) })
        {
            age = *extracted;
            break;
        }
    }

    std::cout<<"ingresaste: "<<age<<'\n';
}
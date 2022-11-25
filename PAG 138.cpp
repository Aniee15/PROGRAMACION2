char getOperator()
{
    while (true)
    {
        std::cout << "Ingrese una de las siguientes opciones: +, -, *, or /: ";
        char operation{};
        std::cin>>operation;

        switch (operation)
        {
            case '+':
            case '-';
            case '*';
            case '/';
                return operation;
            default:
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Oops, ingreso un caracter invalido. intente de nuevo.\n";
        }
    }
}
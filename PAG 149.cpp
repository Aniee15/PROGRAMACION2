void printResult(double x, char operationm, double y)
{
    switch (operation)
    {
        case '+': 
        std::cout << x << " + " << y << " is " << x + y << '\n'; 
        break;
        case '-': 
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
        case '*': 
        std::cout << x << " * " << y << " is " << x * y << '\n'; 
        break;
        case '/': 
        std::cout << x << " / " << y << " is " << x / y << '\n'; 
        break;
        default:
        std::cerr<<"Algo salio mal: printResult() tiene un operador invalido.\n";
    }
}
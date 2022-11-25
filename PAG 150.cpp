int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y( getDouble() );

    printResult(x, operation, y);

    return 0;
}
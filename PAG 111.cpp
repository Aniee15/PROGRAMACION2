int valor {5};
std::cout<<&valor; // imprime la direccion de valor
std::cout<<valor; // imprime contenidos de valor

int *ptr {&valor}; // ptr apunta al valor
std::cout<<ptr; // imprime la direccion contenida en ptr, que es &valor
std::cout<<*ptr; // indireccion a traves de ptr (obtiene el valor al que apunta ptr)
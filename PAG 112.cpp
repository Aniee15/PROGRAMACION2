int value1{ 5 };
int value2{ 7 };

int *ptr{};

ptr = &value1; // ptr apunta a value1
std::cout<<*ptr; // imprime 5

ptr = &value2; // ptr ahora apunta a value2
std::cout<<*ptr; // imprime 7
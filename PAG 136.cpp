#include <iostream>

int main()
{
    int array[5]{ 9, 6, 5, 3, 1 };

    std::cout<<sizeof(array)<<'\n';

        int *ptr{ array };
        std::cout<<sizeof(ptr)<<'\n';

    return 0;
}
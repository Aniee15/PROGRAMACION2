char *chPtr{};
int *iptr{};

struct Something
{
    int x{};
    int y{};
    int z{};
};

Something *somethingPtr{};

std::cout<<sizeof(chPtr)<<'\n';
std::cout<<sizeof(iPtr)<<'\n';
std::cout<<sizeof(somethingPtr)<<'\n';
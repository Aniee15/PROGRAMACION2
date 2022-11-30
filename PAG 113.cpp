int value{ 5 };
int *ptr{ &value };

*ptr = 7;
std::cout<<value<<'\n';
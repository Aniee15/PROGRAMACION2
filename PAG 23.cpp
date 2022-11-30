std::cout.setf(std::ios::sowpos | std::ios::uppercase);
std::cout<<27<<'\n';

/////////////////////////////////////////////////////////

std::cout.setf(std::ios::sowpos);
std::cout<<27<<'\n';
std::cout.unsetf(std::ios::uppercase);
std::cout<<28<<'\n';
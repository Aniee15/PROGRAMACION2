std::ifstream inf("sample.dat");
inf.seekg(0, std::ios::end);
std::cout<<inf.tellg();
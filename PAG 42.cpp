std::stringstream os;
os<<"hola ";

os.str("");
os.clear();

os<<"Mundo...cruel!";
std::cout<<os.str();
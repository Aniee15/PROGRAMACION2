std::stringstream os;
os<<"hola ";

os.str(""); // borra el buffer

os<<"Mundo...cruel!";
std::cout<<os.str();
std::stringstream os;
os<<"Hola ";

os.str(std::string{});

os << "Mundo...cruel!";
cout<<os.str();
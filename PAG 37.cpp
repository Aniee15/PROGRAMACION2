std::stringstream os;
os<<"12345 67.89"<<'\n';
cout<<os.str();

/////////////////////////

std::stringstream os;
os<<"12345 67.89";
std::string strValue;
os>>strValue;
std::string strValue2;
os>>strValue2;
std::cout<<strValue<<" - "<<strValue2<<'\n';
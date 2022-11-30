std::stringstream os;
os<<"12345 67.89";
int nValue;
double dValue;

os>>nValue>>dValue;

cout<<nValue<<' '<<dValue<<'\n';
#include <iostream>
// esta es una directiva using que le dice al compilador que verifique
// el espacio de nombres estandar al resolver identificadores sin prefijo
using namespace std;

int main ()
{
	//cout no tiene prefijo, por lo que el compilador comprobara
	// si cout esta definido localmente o en el espacio de nombres std
	cout<<"hola mundo!";
	return 0;
}

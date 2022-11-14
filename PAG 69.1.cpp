void sayHi ();
// declaracion de avance para la funcion sayHi,
// hace que sayHi sea accesible en este archivo

int main ()
{
	sayHi();
	// llamada a la funcion definida en otro archivo, 
	// el enlazador conectara esta llamada a la definicion de la funcion
	
	return 0;
}
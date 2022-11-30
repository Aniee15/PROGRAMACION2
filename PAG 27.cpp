// aunque prime es el arreglo real, dentro de esta funcion debe tratarse como una constante
void passArray(const int prime[5])
{
    // asi que cada una de estas lineas provocara un error de compilacion!
    prime[0] = 11;
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}
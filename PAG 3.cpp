int add (int x,int y)
{//bloque de inicio
return x + y;
}// bloque final (sin punto y coma)

int main()
{//bloque de inicio
    //declaraciones multiples
    int valor {}; //esto es inicializacion, no un bloque
    sumar (3,4);
    {//bloque inerno  /  anidado
    sumar (3,4);
    } //finaliza el bloque interno  /  anidado

    return 0;
}//bloque final (sin punto y coma)
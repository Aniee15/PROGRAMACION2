int array [5] {}; // declara un arreglo de longitud 5
// usando un indice literal (constante):
array [1] = 7; // ok
//usando un indice enum (constante)
enum Animals
{
    animal_cat = 2
};
array [animal_cat] = 4; // ok

// usando un indice variable (no constante):
indice short = 3;
array [indice] = 7; // ok

// usando una expresion que se evalua como un indice entero:
array [1 + 2] = 7; // ok
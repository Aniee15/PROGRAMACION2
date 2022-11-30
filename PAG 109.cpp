int iValue {5};
double dValue {7.0};

int *iptr {&iValue}; // ok
double *dPtr {&dValue}; // ok
iPtr = &dValue; // incorrecto: el puntero int no puede apuntar a la direccion de una variable double
dPtr = &iValue; // incorrecto: el puntero double no puede apuntar a la direccion de una variable int
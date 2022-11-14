// definiciones de variables globales internas:
static int g_x; // define la variable global interna no inicializada  (cero inicializada por defecto)
static int g_x [1]; // define la variable global interna inicializada

const int g_y {2}; // define la variable constante global interna inicializada 
constexpr int g_y {3}; // define la variable constexpr global interna inicializada

// definiciones de funciones internas:
static int foo() {}; // define la funcion interna
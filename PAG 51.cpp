//variables globales no constantes
int g_x;//define la variable global no incializada (cero inicializada por defecto)
int g_x{};//define explicitamente una variable global inicializada en cero
int g_x {1}; // define la variable global inicializada explicitamente

//const variables globales
const int g_y; // error: las variables const deben inicializarse
const int g_x {2}; // define la constante global inicializada

//constxpr variables globales
constexpr int g_y; // error: las variables constexpr deben inicializarse
constexpr int g y {3}; //define la constante global inicializada
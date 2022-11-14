// definiciones de variables globales externas:
int g_x; // define la variable global externa no inicializada (cero inicializada por defecto)
extern const int g_x {1}; // define la variable global externa const inicializada 
extern constexpr int g_x {2}; // define la vairable global externa constexpr inicializada

// reenviar declaraciones 
extern int g_y; // declaracion hacia adelante para variable global no constante 
extern const int g_y; // declaracion hacia adelante para la variable global const
extern constexpr int g_y; // no permitido: las variables constexpr no se pueden declarar hacia adelante 
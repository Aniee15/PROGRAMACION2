// genera un numero aleatorio entre min y max (inclusive)
// asume que std::srand () ya ha sido llamado
// asume max - min <= RAND_MAX
int getRandomNumber(int min, in max)
{   // utilizada para la eficiencia, por lo que solo calculamos este valor una vez
static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };
// distribuir uniformemente el numero aleatorio en todo nuestro rango
return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
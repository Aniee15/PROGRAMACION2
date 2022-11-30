#include <iostream>

using namespace std;

int main()
{
    double batteryLifeInhours[3]{}; // almacena 3 doubles
    batteryLifeInhours[0] = 2.0;
    batteryLifeInhours[1] = 3.0;
    batteryLifeInhours[2] = 4.3;

    cout<<"La duracion media de la bateria es: "<<
    (batteryLifeInhours[0]+batteryLifeInhours[1]+batteryLifeInhours[2]) / 3.0 << "hora(s)\n";

    return 0;
}
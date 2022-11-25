#include "constants.h"
#include <iostream>
using namespace std;
double getInitialHeight()
{
    cout<<"Ingrese la altura de la torre en metros: ";
    double initialHeight{}; cin>>initialHeight; return initialHeight;
}
double calculateHeight(double initialHeight, int secondsPassed)
{
    double distanceFallen{ (myConstants::gravity * secondsPassed * secondsPassed) / 2.0 };
    double currentHeight{ initialHeight - distanceFallen }; return currentHeight;
}
void printHeight(double height, int secondsPassed)
{
    if (height > 0.0)   {
        cout<<"En " << secondsPassed << " segundos, la pelota esta a la altura de:\t" << height << " metros\n"; }
    else cout << "En " << secondsPassed << " segundos, la pelota esta en el suelo.\n";
}
void calculateAndPrintHeight(double initialHeight, int secondsPassed)
{ double height{ calculateHeight(initialHeight, secondsPassed) }; printHeight(height, secondsPassed); }
int main()
{
    const double initialHeight{ getInitialHeight() };
    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);

    return 0;
}
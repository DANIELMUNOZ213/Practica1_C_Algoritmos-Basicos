#include <iostream>
using namespace std;

int main() {
    double velocidadMS, velocidadMPH;

    cout << "Ingrese la velocidad en m/s: ";
    cin >> velocidadMS;

    velocidadMPH = velocidadMS * 2.23;

    cout.precision(2);
    cout << fixed;
    cout << "La velocidad en mph es: " << velocidadMPH << endl;

    return 0;
}
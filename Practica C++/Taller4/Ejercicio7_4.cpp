#include <iostream>
using namespace std;

int main() {
    double velocidadMS, velocidadKMH;

    cout << "Ingrese la velocidad en m/s: ";
    cin >> velocidadMS;

    velocidadKMH = velocidadMS * 3.6;

    cout.precision(2);
    cout << fixed;
    cout << "La velocidad en km/h es: " << velocidadKMH << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, discriminante, x1, x2, parteReal, parteImaginaria;

    cout << "Ingrese A, B y C: ";
    cin >> A >> B >> C;

    if (A == 0) {
        cout << "El valor de A no puede ser 0, no es una ecuación cuadrática." << endl;
        return 0;
    }

    discriminante = pow(B, 2) - 4 * A * C;

    if (discriminante > 0) {
        x1 = (-B + sqrt(discriminante)) / (2 * A);
        x2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << "Solución 1: " << x1 << endl;
        cout << "Solución 2: " << x2 << endl;
    } 
    else if (discriminante == 0) {
        x1 = -B / (2 * A);
        cout << "La ecuación tiene una sola solución: " << x1 << endl;
    } 
    else {
        parteReal = -B / (2 * A);
        parteImaginaria = sqrt(-discriminante) / (2 * A);
        cout << "Las soluciones son imaginarias:" << endl;
        cout << "Solución 1: " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "Solución 2: " << parteReal << " - " << parteImaginaria << "i" << endl;
    }

    return 0;
}
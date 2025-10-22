#include <iostream>
using namespace std;

int main() {
    double largo, alto, area, arena;

    cout << "Ingrese el largo de la pared en metros: ";
    cin >> largo;

    cout << "Ingrese el alto de la pared en metros: ";
    cin >> alto;

    area = largo * alto;
    arena = area * 0.5;

    cout.precision(2);
    cout << fixed;
    cout << "La cantidad de arena necesaria es: " << arena << " m3" << endl;

    return 0;
}
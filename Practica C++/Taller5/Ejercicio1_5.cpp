#include <iostream>
using namespace std;

int main() {
    double litros, onzas, metrosCubicos, cmCubicos, galones;

    cout << "Ingrese la cantidad en litros: ";
    cin >> litros;

    onzas = litros * 33.814;
    metrosCubicos = litros / 1000;
    cmCubicos = litros * 1000;

    cout.precision(4);
    cout << fixed;
    cout << "Litros en onzas líquidas: " << onzas << endl;
    cout << "Litros en metros cúbicos: " << metrosCubicos << endl;
    cout << "Litros en centímetros cúbicos: " << cmCubicos << endl;

    cout << "\nIngrese la cantidad en onzas líquidas: ";
    cin >> onzas;

    galones = onzas / 128;
    litros = onzas / 33.814;

    cout << "Onzas en galones: " << galones << endl;
    cout << "Onzas en litros: " << litros << endl;

    return 0;
}
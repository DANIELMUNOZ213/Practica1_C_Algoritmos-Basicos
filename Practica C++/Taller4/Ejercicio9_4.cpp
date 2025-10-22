#include <iostream>
using namespace std;

int main() {
    double litros100km, kmPorGalon;
    double galon = 3.78;

    cout << "Ingrese el consumo en litros por 100 km: ";
    cin >> litros100km;

    kmPorGalon = 100 / (litros100km / galon);

    cout.precision(2);
    cout << fixed;
    cout << "El consumo es de: " << kmPorGalon << " km/galón" << endl;

    return 0;
}
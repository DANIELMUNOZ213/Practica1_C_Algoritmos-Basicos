#include <iostream>
using namespace std;

int main() {
    int horas, minutos;
    double totalPagar, valorMinuto;

    cout << "Ingrese horas completas de estacionamiento: ";
    cin >> horas;
    cout << "Ingrese minutos adicionales (0-59): ";
    cin >> minutos;

    valorMinuto = 1250.0 / 15.0;

    totalPagar = 5000 + (horas - 1) * 5000 + (minutos * valorMinuto);

    cout.precision(2);
    cout << fixed;
    cout << "El total a pagar es: $" << totalPagar << endl;

    return 0;
}
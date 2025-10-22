#include <iostream>
using namespace std;

int main() {
    double horas, tarifa, salario;

    cout << "Ingrese número de horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;

    if (horas <= 35) {
        salario = horas * tarifa;
    } else {
        salario = 35 * tarifa + (horas - 35) * tarifa * 1.5;
    }

    cout << "Salario neto semanal: " << salario << endl;

    return 0;
}
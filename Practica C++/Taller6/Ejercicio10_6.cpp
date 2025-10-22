#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipo;
    double valor = 2000000, iva, total;

    iva = valor * 0.19;

    cout << "Ingrese tipo de computador (Basico, Medio, Avanzado): ";
    cin >> tipo;

    if (tipo == "Basico") {
        total = valor + (valor * 0.15) + iva;
    } else if (tipo == "Medio") {
        total = valor + (valor * 0.23) + iva;
    } else if (tipo == "Avanzado") {
        total = valor + (valor * 0.40) + iva;
    } else {
        cout << "Tipo de computador no válido." << endl;
        return 0;
    }

    cout << "Valor final del computador: " << total << endl;

    return 0;
}
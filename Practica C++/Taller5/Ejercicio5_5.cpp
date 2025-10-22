#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, n4, n5;
    double suma, resta, resultado;

    cout << "Ingrese 5 números: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // a
    suma = n1 + n2 + n3;
    resta = n4 - n5;
    cout << "a) Suma de los 3 primeros: " << suma << " y Resta de los últimos: " << resta << endl;

    // b
    resultado = (n1 + n2 + n3 + n4) / n5;
    cout << "b) Resultado: " << resultado << endl;

    // c
    resultado = ((n1 + n2 + n3) / 3) * n4 / n5;
    cout << "c) Resultado: " << resultado << endl;

    // d
    resultado = ((n3 + n4 + n5) / 3) * (0.40 * (n1 + n2));
    cout << "d) Resultado: " << resultado << endl;

    // e
    resultado = (0.45 * ((n1 + n2 + n3) / 3)) * (0.25 * (n4 + n5));
    cout << "e) Resultado: " << resultado << endl;

    // f
    if (n1 != n5) {
        resultado = (0.35 * (n1 + n3 + n5)) * ((n2 + n4) / 2) / (n1 - n5);
        cout << "f) Resultado: " << resultado << endl;
    } else {
        cout << "f) Error: no se puede dividir entre cero (n1 = n5)" << endl;
    }

    return 0;
}
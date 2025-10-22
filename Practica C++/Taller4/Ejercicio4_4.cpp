#include <iostream>
using namespace std;

int main() {
    double valorArticulo, subtotal, total;
    int cantidad;

    cout << "Ingrese el valor del artículo: ";
    cin >> valorArticulo;

    cout << "Ingrese la cantidad de artículos: ";
    cin >> cantidad;

    subtotal = valorArticulo * cantidad;
    total = subtotal + (subtotal * 0.10); // 10% de impuesto

    cout.precision(2);
    cout << fixed;
    cout << "El total a pagar con impuesto es: " << total << endl;

    return 0;
}
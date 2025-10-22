#include <iostream>
using namespace std;

int main() {
    double art1, art2, art3, desc1, desc2, desc3, total;

    cout << "Ingrese valor del artículo 1: ";
    cin >> art1;
    cout << "Ingrese valor del artículo 2: ";
    cin >> art2;
    cout << "Ingrese valor del artículo 3: ";
    cin >> art3;

    desc1 = art1 * 0.07;
    desc2 = art2 * 0.12;
    desc3 = art3 * 0.15;

    total = (art1 - desc1) + (art2 - desc2) + (art3 - desc3);

    cout.precision(2);
    cout << fixed;
    cout << "Descuento artículo 1: $" << desc1 << endl;
    cout << "Descuento artículo 2: $" << desc2 << endl;
    cout << "Descuento artículo 3: $" << desc3 << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
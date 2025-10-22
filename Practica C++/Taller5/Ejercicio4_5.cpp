#include <iostream>
using namespace std;

int main() {
    double art1, art2, art3;
    double imp1, imp2, imp3, desc1, desc2, desc3;
    double total1, total2, total3;

    cout << "Ingrese el valor del artículo en el primer establecimiento: ";
    cin >> art1;
    cout << "Ingrese el valor del artículo en el segundo establecimiento: ";
    cin >> art2;
    cout << "Ingrese el valor del artículo en el tercer establecimiento: ";
    cin >> art3;

    imp1 = art1 * 0.10;
    desc1 = art1 * 0.05;
    total1 = art1 + imp1 - desc1;

    imp2 = art2 * 0.12;
    desc2 = art2 * 0.05;
    total2 = art2 + imp2 - desc2;

    imp3 = art3 * 0.15;
    desc3 = art3 * 0.07;
    total3 = art3 + imp3 - desc3;

    cout.precision(2);
    cout << fixed;

    cout << "Artículo 1 -> Impuesto: $" << imp1 << "  Descuento: $" << desc1 << "  Total: $" << total1 << endl;
    cout << "Artículo 2 -> Impuesto: $" << imp2 << "  Descuento: $" << desc2 << "  Total: $" << total2 << endl;
    cout << "Artículo 3 -> Impuesto: $" << imp3 << "  Descuento: $" << desc3 << "  Total: $" << total3 << endl;
    cout << "Valor total de la compra: $" << total1 + total2 + total3 << endl;

    return 0;
}
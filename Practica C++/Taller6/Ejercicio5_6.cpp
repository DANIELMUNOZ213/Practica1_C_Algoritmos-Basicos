#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int cont = 0, suma = 0;

    cout << "Ingrese cinco valores: ";
    cin >> a >> b >> c >> d >> e;

    if (a % 3 == 0) cont++;
    else suma += a;

    if (b % 3 == 0) cont++;
    else suma += b;

    if (c % 3 == 0) cont++;
    else suma += c;

    if (d % 3 == 0) cont++;
    else suma += d;

    if (e % 3 == 0) cont++;
    else suma += e;

    cout << "Cantidad de múltiplos de 3: " << cont << endl;
    cout << "Suma de los que no son múltiplos de 3: " << suma << endl;

    return 0;
}
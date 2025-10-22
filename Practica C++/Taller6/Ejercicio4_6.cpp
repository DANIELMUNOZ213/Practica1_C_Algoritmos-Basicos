#include <iostream>
using namespace std;

int main() {
    int a, b, c, suma = 0;

    cout << "Ingrese tres valores: ";
    cin >> a >> b >> c;

    if (a % 2 == 0) {
        cout << a << " es par" << endl;
        suma += a;
    } else {
        cout << a << " es impar" << endl;
    }

    if (b % 2 == 0) {
        cout << b << " es par" << endl;
        suma += b;
    } else {
        cout << b << " es impar" << endl;
    }

    if (c % 2 == 0) {
        cout << c << " es par" << endl;
        suma += c;
    } else {
        cout << c << " es impar" << endl;
    }

    cout << "Suma de los números pares: " << suma << endl;

    return 0;
}
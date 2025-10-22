#include <iostream>
using namespace std;

int main() {
    int a, b, c, menor, medio, mayor;

    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        menor = a;
    } else {
        if (b <= a && b <= c) {
            menor = b;
        } else {
            menor = c;
        }
    }

    if (a >= b && a >= c) {
        mayor = a;
    } else {
        if (b >= a && b >= c) {
            mayor = b;
        } else {
            mayor = c;
        }
    }

    medio = a + b + c - menor - mayor;

    cout << "Orden: " << menor << ", " << medio << ", " << mayor << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int cont = 0, suma = 0;

    cout << "Ingrese cinco valores: ";
    cin >> a >> b >> c >> d >> e;

    if (a % 3 == 0)
        cont++;
    else {
        suma += a;
        if (a % 2 == 0)
            cout << a << " no es múltiplo de 3 y es par" << endl;
    }

    if (b % 3 == 0)
        cont++;
    else {
        suma += b;
        if (b % 2 == 0)
            cout << b << " no es múltiplo de 3 y es par" << endl;
    }

    if (c % 3 == 0)
        cont++;
    else {
        suma += c;
        if (c % 2 == 0)
            cout << c << " no es múltiplo de 3 y es par" << endl;
    }

    if (d % 3 == 0)
        cont++;
    else {
        suma += d;
        if (d % 2 == 0)
            cout << d << " no es múltiplo de 3 y es par" << endl;
    }

    if (e % 3 == 0)
        cont++;
    else {
        suma += e;
        if (e % 2 == 0)
            cout << e << " no es múltiplo de 3 y es par" << endl;
    }

    cout << "Cantidad de múltiplos de 3: " << cont << endl;
    cout << "Suma de los que no son múltiplos de 3: " << suma << endl;

    return 0;
}
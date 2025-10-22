#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4, resto;

    cout << "Ingrese un número de 4 dígitos: ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        d1 = num / 1000;
        resto = num % 1000;

        d2 = resto / 100;
        resto = resto % 100;

        d3 = resto / 10;
        d4 = resto % 10;

        cout << "Dígito 1: " << d1 << endl;
        cout << "Dígito 2: " << d2 << endl;
        cout << "Dígito 3: " << d3 << endl;
        cout << "Dígito 4: " << d4 << endl;
    } else {
        cout << "El número ingresado no tiene 4 dígitos." << endl;
    }

    return 0;
}
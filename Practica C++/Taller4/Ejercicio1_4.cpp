#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int cuadrado1, cuadrado2, cubo1, cubo2;

    cout << "Ingrese el primer número entero: ";
    cin >> num1;

    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    cuadrado1 = num1 * num1;
    cubo1 = num1 * num1 * num1;

    cuadrado2 = num2 * num2;
    cubo2 = num2 * num2 * num2;

    cout << "Número 1 -> Cuadrado: " << cuadrado1 << "  Cubo: " << cubo1 << endl;
    cout << "Número 2 -> Cuadrado: " << cuadrado2 << "  Cubo: " << cubo2 << endl;

    return 0;
}
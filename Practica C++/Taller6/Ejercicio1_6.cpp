#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << "El primero es múltiplo del segundo" << endl;
        } else {
            cout << "El primero NO es múltiplo del segundo" << endl;
        }
    } else {
        cout << "No se puede dividir entre cero" << endl;
    }

    return 0;
}
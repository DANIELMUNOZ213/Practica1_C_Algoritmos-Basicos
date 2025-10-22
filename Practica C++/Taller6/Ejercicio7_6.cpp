#include <iostream>
using namespace std;

int main() {
    int A, B, C, mayor, menor;

    cout << "Ingrese tres valores distintos: ";
    cin >> A >> B >> C;

    if (A == B || A == C || B == C) {
        cout << "Alerta: hay valores iguales" << endl;
    } else {
        if (A > B && A > C) {
            mayor = A;
        } else {
            if (B > A && B > C) {
                mayor = B;
            } else {
                mayor = C;
            }
        }

        if (A < B && A < C) {
            menor = A;
        } else {
            if (B < A && B < C) {
                menor = B;
            } else {
                menor = C;
            }
        }

        cout << "El mayor es: " << mayor << endl;
        cout << "El menor es: " << menor << endl;
    }

    return 0;
}
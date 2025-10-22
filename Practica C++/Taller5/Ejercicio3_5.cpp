#include <iostream>
using namespace std;

int main() {
    double matricula, derechos, seguro, bienestar, otros;

    cout << "Ingrese el valor total de la matrícula: ";
    cin >> matricula;

    derechos = matricula * 0.70;
    seguro = matricula * 0.10;
    bienestar = matricula * 0.15;
    otros = matricula * 0.05;

    cout.precision(2);
    cout << fixed;
    cout << "Derechos de matrícula: $" << derechos << endl;
    cout << "Seguro estudiantil: $" << seguro << endl;
    cout << "Bienestar universitario: $" << bienestar << endl;
    cout << "Otros servicios: $" << otros << endl;

    return 0;
}
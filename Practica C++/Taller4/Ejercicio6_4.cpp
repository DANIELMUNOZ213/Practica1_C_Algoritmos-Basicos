#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Ingrese los grados Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout.precision(2);
    cout << fixed;
    cout << fahrenheit << "°F equivalen a " << celsius << "°C" << endl;

    return 0;
}
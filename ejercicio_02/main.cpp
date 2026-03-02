#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double lado1, lado2, lado3;

    cout << "Ingresa el lado 1: ";
    cin >> lado1;

    cout << "Ingresa el lado 2: ";
    cin >> lado2;

    cout << "Ingresa el lado 3: ";
    cin >> lado3;

    if (lado1 > 0 && lado2 > 0 && lado3 > 0 &&
        lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1) {

        cout << "Es un triangulo valido.\n";

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Tipo por lados: Equilatero\n";
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Tipo por lados: Isosceles\n";
        }
        else {
            cout << "Tipo por lados: Escaleno\n";
        }

        double a = lado1;
        double b = lado2;
        double c = lado3;

        if (a >= b && a >= c) {
            c = a;
            a = lado2;
            b = lado3;
        }
        else if (b >= a && b >= c) {
            c = b;
            a = lado1;
            b = lado3;
        }

        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
            cout << "Tipo por angulos: Rectangulo\n";
        }
        else if (pow(a, 2) + pow(b, 2) > pow(c, 2)) {
            cout << "Tipo por angulos: Acutangulo\n";
        }
        else {
            cout << "Tipo por angulos: Obtusangulo\n";
        }

    }
    else {
        cout << "No forman un triangulo valido.\n";
    }

    return 0;
}

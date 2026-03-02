#include <iostream>

int main() {

    int anio;
    std::cout << "Ingrese un anio: ";
    std::cin >> anio;

    bool divisible4 = (anio % 4 == 0);
    bool divisible100 = (anio % 100 == 0);
    bool divisible400 = (anio % 400 == 0);

    std::cout << "\nAnalisis paso a paso:\n";

    std::cout << "Divisible entre 4? " << (divisible4 ? "Si" : "No") << "\n";
    std::cout << "Divisible entre 100? " << (divisible100 ? "Si" : "No") << "\n";
    std::cout << "Divisible entre 400? " << (divisible400 ? "Si" : "No") << "\n";

    bool esBisiesto = (divisible4 && !divisible100) || divisible400;

    if (esBisiesto) {
        std::cout << "\nResultado: Es un anio bisiesto\n";
    } else {
        std::cout << "\nResultado: No es un anio bisiesto\n";
    }

    return 0;
}

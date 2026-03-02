#include <iostream>
#include <cmath>

int main() {
   
    double a, b;
    char op;
    
    std::cout << "Bienvenido a la Calculadora\n";
    std::cout << "Escriba la operacion: ";
    std::cin >> a >> op >> b;

    switch (op) {

        case '+':
            std::cout << "El resultado es: " << a + b << "\n";
            break;

        case '-':
            std::cout << "El resultado es: " << a - b << "\n";
            break;

        case '*':
            std::cout << "El resultado es: " << a * b << "\n";
            break;

        case '/':
            if (b == 0) {
                std::cout << "Error: No se puede dividir por cero\n";
            } else {
                std::cout << "El resultado es: " << a / b << "\n";
            }
            break;

        case '%':
            if (b == 0) {
                std::cout << "Error: No se puede calcular modulo con cero\n";
            } else {
                std::cout << "El resultado es: " << std::fmod(a, b) << "\n";
            }
            break;

        default:
            std::cout << "Operador no valido\n";
    }

    return 0;
}

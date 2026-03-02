#include <iostream>
#include <string>

int main() {

    int nota;
    std::string letra;
    std::string estado;

    std::cout << "Ingrese la nota (0-100): ";
    std::cin >> nota;

    if (nota >= 90 && nota <= 100) {
        letra = "A";
    }
    else if (nota >= 80 && nota < 90) {
        letra = "B";
    }
    else if (nota >= 70 && nota < 80) {
        letra = "C";
    }
    else if (nota >= 60 && nota < 70) {
        letra = "D";
    }
    else if (nota >= 0 && nota < 60) {
        letra = "F";
    }
    else {
        std::cout << "Nota invalida\n";
        return 0;
    }

    if (nota >= 60) {
        estado = "Paso";
    } else {
        estado = "No paso";
    }

    std::cout << "Calificacion: " << letra << "\n";
    std::cout << "Estado: " << estado << "\n";

    return 0;
}

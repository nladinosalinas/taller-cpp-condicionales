#include <iostream>

const int LEER = 0b001;
const int ESCRIBIR = 0b010;
const int EJECUTAR = 0b100;

int main() {

    int permisos;

    std::cout << "Ingresa el valor entero de permisos (0-7): ";
    std::cin >> permisos;

    std::cout << "Permisos detectados:\n";

    if (permisos & LEER) {
        std::cout << "Tiene permiso de LEER\n";
    }

    if (permisos & ESCRIBIR) {
        std::cout << "Tiene permiso de ESCRIBIR\n";
    }

    if (permisos & EJECUTAR) {
        std::cout << "Tiene permiso de EJECUTAR\n";
    }

    if ((permisos & (LEER | ESCRIBIR | EJECUTAR)) == 0) {
        std::cout << "No tiene ningun permiso\n";
    }

    return 0;
}

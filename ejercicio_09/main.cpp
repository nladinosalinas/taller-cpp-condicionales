#include <iostream>

int main() {

    double peso;
    double altura;

    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;

    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    if (altura <= 0) {
        std::cout << "Altura invalida.\n";
        return 0;
    }

    double imc = peso / (altura * altura);

    std::cout << "IMC: " << imc << "\n";

    if (imc < 18.5) {
        std::cout << "Clasificacion: Bajo peso\n";
        std::cout << "Sugerencia: Considera consultar a un profesional de la salud.\n";
    }
    else if (imc >= 18.5 && imc < 25) {
        std::cout << "Clasificacion: Normal\n";
        std::cout << "Sugerencia: Mantener habitos saludables.\n";
    }
    else if (imc >= 25 && imc < 30) {
        std::cout << "Clasificacion: Sobrepeso\n";
        std::cout << "Sugerencia: Considera mejorar dieta y actividad fisica.\n";
    }
    else if (imc >= 30 && imc < 35) {
        std::cout << "Clasificacion: Obesidad I\n";
        std::cout << "Sugerencia: Consultar orientacion profesional.\n";
    }
    else {
        std::cout << "Clasificacion: Obesidad II\n";
        std::cout << "Sugerencia: Buscar apoyo medico.\n";
    }

    return 0;
}

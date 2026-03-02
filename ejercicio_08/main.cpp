#include <iostream>

int main() {

    double saldo = 10000.0;
    int opcion;
    double monto;
    int transacciones = 0;

    std::cout << "=== Bienvenido al Cajero ATM ===\n";

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Depositar\n";
        std::cout << "2. Retirar\n";
        std::cout << "3. Consultar saldo\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {

            case 1:
                std::cout << "Ingrese monto a depositar: ";
                std::cin >> monto;

                if (monto > 0) {
                    saldo += monto;
                    transacciones++;
                    std::cout << "Deposito exitoso.\n";
                } else {
                    std::cout << "Monto invalido.\n";
                }
                break;

            case 2:
                std::cout << "Ingrese monto a retirar: ";
                std::cin >> monto;

                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    transacciones++;
                    std::cout << "Retiro exitoso.\n";
                } else {
                    std::cout << "Fondos insuficientes o monto invalido.\n";
                }
                break;

            case 3:
                std::cout << "Saldo actual: " << saldo << "\n";
                break;

            case 4:
                std::cout << "Saliendo del sistema...\n";
                break;

            default:
                std::cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    std::cout << "\nTotal de transacciones realizadas: " << transacciones << "\n";

    return 0;
}

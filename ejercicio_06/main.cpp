#include <iostream>

int main() {

    int x = 5;
    int y = 10;

    std::cout << "Valores iniciales:\n";
    std::cout << "x = " << x << ", y = " << y << "\n";

    {
        int a = x;
        int b = y;

        std::cout << "Metodo 1: Variable temporal\n";

        int temp = a;
        std::cout << "temp = " << temp << "\n";

        a = b;
        std::cout << "a = " << a << "\n";

        b = temp;
        std::cout << "b = " << b << "\n";

        std::cout << "Resultado final: a = " << a << ", b = " << b << "\n";
    }

    {
        int a = x;
        int b = y;

        std::cout << "Metodo 2: Operaciones aritmeticas\n";

        a = a + b;
        std::cout << "Paso 1 (a = a + b): a = " << a << "\n";

        b = a - b;
        std::cout << "Paso 2 (b = a - b): b = " << b << "\n";

        a = a - b;
        std::cout << "Paso 3 (a = a - b): a = " << a << "\n";

        std::cout << "Resultado final: a = " << a << ", b = " << b << "\n";
    }

    {
        int a = x;
        int b = y;

        std::cout << "Metodo 3: XOR\n";

        a ^= b;
        std::cout << "Paso 1 (a ^= b): a = " << a << "\n";

        b ^= a;
        std::cout << "Paso 2 (b ^= a): b = " << b << "\n";

        a ^= b;
        std::cout << "Paso 3 (a ^= b): a = " << a << "\n";

        std::cout << "Resultado final: a = " << a << ", b = " << b << "\n";
    }

    return 0;
}

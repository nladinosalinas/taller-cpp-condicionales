#include <iostream>
#include <iomanip>

int main() {
    
    double temperaturaCelsius;
    
    std::cout << "Ingresa la temperatura en Celsius: ";
    std::cin >> temperaturaCelsius;

    double temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32.0;
    double temperaturaKelvin = temperaturaCelsius + 273.15;
    double temperaturaRankine = (temperaturaCelsius + 273.15) * 1.8;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Fahrenheit: " << temperaturaFahrenheit << "\n";
    std::cout << "Kelvin: " << temperaturaKelvin << "\n";
    std::cout << "Rankine: " << temperaturaRankine << "\n";

    return 0;
}

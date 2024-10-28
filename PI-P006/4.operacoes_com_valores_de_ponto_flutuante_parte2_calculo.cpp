#include <iostream>
#include <cmath> // Para usar M_PI
#include <corecrt_math_defines.h>

int main() {
    double raio;

    // Solicitar ao usuário que forneça o raio do círculo
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;

    // Passo a: Calcular o diâmetro
    double diametro = 2 * raio;
    std::cout << "Diâmetro: " << diametro << std::endl;

    // Passo b: Calcular a circunferência (perímetro)
    double circunferencia = 2 * M_PI * raio;
    std::cout << "Circunferência: " << circunferencia << std::endl;

    // Passo c: Calcular a área
    double area = M_PI * pow(raio, 2);
    std::cout << "Área: " << area << std::endl;

    return 0;
}

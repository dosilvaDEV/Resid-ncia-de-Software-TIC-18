#include <iostream>

int main() {
    double x, y;

    // Solicitar ao usuário que forneça as coordenadas do ponto
    std::cout << "Digite a coordenada x: ";
    std::cin >> x;
    std::cout << "Digite a coordenada y: ";
    std::cin >> y;

    // Determinar em qual quadrante o ponto se encontra
    std::string quadrante = (x > 0 && y > 0) ? "Primeiro quadrante" :
                             (x < 0 && y > 0) ? "Segundo quadrante" :
                             (x < 0 && y < 0) ? "Terceiro quadrante" :
                             (x > 0 && y < 0) ? "Quarto quadrante" :
                             (x == 0 && y == 0) ? "Origem" :
                             (x == 0) ? "Eixo Y" :
                             "Eixo X";

    std::cout << "O ponto está no: " << quadrante << std::endl;

    return 0;
}

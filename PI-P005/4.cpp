#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

int main() {
    double x, y, z;

    // Entrada de dados para as coordenadas
    std::cout << "Digite as coordenadas x e y: ";
    std::cin >> x >> y;

    // Verifica a posição em relação à curva f(x) = 5x + 2
    double f_x = 5 * x + 2;
    if (y > f_x) {
        std::cout << "O ponto (x, y) está acima da curva.\n";
    } else if (y < f_x) {
        std::cout << "O ponto (x, y) está abaixo da curva.\n";
    } else {
        std::cout << "O ponto (x, y) está exatamente na curva.\n";
    }

    // Distância euclidiana ao centro de coordenadas
    z = std::sqrt(x * x + y * y);
    std::cout << "Distancia euclidiana ao centro: " << z << std::endl;

    // Produto entre x e y em notação científica
    double produto = x * y;
    std::cout << "Produto de x e y em notacao cientifica: " << std::scientific << produto << std::endl;

    // Entrada de dados para o polinômio quadrático
    double a, b, c;
    std::cout << "Digite os coeficientes a, b e c do polinomio (ax^2 + bx + c): ";
    std::cin >> a >> b >> c;

    // Cálculo do discriminante
    double discriminante = b * b - 4 * a * c;

    // Determina o número de raízes e calcula, se houver
    if (discriminante > 0) {
        double raiz1 = (-b + std::sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - std::sqrt(discriminante)) / (2 * a);
        std::cout << "O polinomio tem duas raizes reais: " << raiz1 << " e " << raiz2 << std::endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        std::cout << "O polinomio tem uma raiz real: " << raiz << std::endl;
    } else {
        std::cout << "O polinomio nao tem raizes reais.\n";
    }

    // Avaliação do polinômio para um valor de x fornecido
    double valorX;
    std::cout << "Digite um valor para x para avaliar o polinomio: ";
    std::cin >> valorX;
    double resultadoPolinomio = a * valorX * valorX + b * valorX + c;
    std::cout << "Valor do polinomio p(x) para x = " << valorX << " é: " << resultadoPolinomio << std::endl;

    return 0;
}

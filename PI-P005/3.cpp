#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int main() {
    int a, b, c;

    // Entrada de dados
    std::cout << "Digite dois numeros inteiros: ";
    std::cin >> a >> b;

    // Soma (resultado em hexadecimal)
    c = a + b;
    std::cout << "Soma em hexadecimal: " << std::hex << c << std::endl;

    // Produto (resultado em octal)
    c = a * b;
    std::cout << "Produto em octal: " << std::oct << c << std::endl;

    // Módulo (valor absoluto da diferença entre a e b)
    c = std::abs(a - b);
    std::cout << "Modulo da diferenca (valor absoluto): " << std::dec << c << std::endl;

    // Divisão (com tratamento de divisão por zero)
    if (b != 0) {
        c = a / b;
        std::cout << "Quociente da divisao: " << c << std::endl;

        // Verifica se a é divisível por b
        std::cout << (a % b == 0 ? "a é divisivel por b" : "a nao é divisivel por b") << std::endl;
    } else {
        std::cout << "Divisao por zero nao é permitida." << std::endl;
    }

    // Verifica se o valor fornecido cabe em short int
    int userInput;
    std::cout << "Digite um numero inteiro para verificar representacao em short int: ";
    std::cin >> userInput;
    std::cout << userInput
              << ((userInput >= std::numeric_limits<short>::min() && userInput <= std::numeric_limits<short>::max())
                      ? " pertence ao intervalo dos short int."
                      : " é maior que um short int.")
              << std::endl;

    return 0;
}

#include <iostream>
#include <string>

int main() {
    int num1, num2;

    // Passo a: Solicitar ao usuário que forneça dois números inteiros
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;

    // Determinar o maior número
    int maior = (num1 > num2) ? num1 : num2;

    // Passo b: Verifica se os números são iguais
    std::cout << (num1 == num2 ? "Estes números são iguais." : std::to_string(maior) + " é maior.") << std::endl;

    // Passo c: Verificar se o maior valor é par ou ímpar
    std::cout << (maior % 2 == 0 ? std::to_string(maior) + " é par." : std::to_string(maior) + " é ímpar.") << std::endl;

    return 0;
}

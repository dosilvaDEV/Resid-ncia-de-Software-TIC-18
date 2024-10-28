#include <iostream>
#include <cstdio> // Para usar scanf

int main() {
    double x, y, z;

    // Passo a: Declaração das variáveis
    // (x, y e z já foram declaradas)

    // Passo b: Solicitar ao usuário que forneça dois números de ponto flutuante
    std::cout << "Digite o primeiro número (x): ";
    std::scanf("%lf", &x);
    std::cout << "Digite o segundo número (y): ";
    std::scanf("%lf", &y);

    // Passo c: Atribuir à variável z a soma das variáveis x e y
    z = x + y;
    std::cout << "Soma: " << z << std::endl;

    // Passo d: Atribuir à variável z a média das variáveis x e y
    z = (x + y) / 2;
    std::cout << "Média: " << z << std::endl;

    // Passo e: Atribuir à variável z o produto entre as variáveis x e y
    z = x * y;
    std::cout << "Produto: " << z << std::endl;

    // Passo f: Atribuir à variável z o maior valor entre as variáveis x e y
    z = (x > y) ? x : y; // Usando o operador condicional
    std::cout << "Maior: " << z << std::endl;

    // Passo g: Atribuir à variável z o menor valor entre as variáveis x e y
    z = (x < y) ? x : y; // Usando o operador condicional
    std::cout << "Menor: " << z << std::endl;

    return 0;
}

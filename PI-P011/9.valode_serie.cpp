#include <iostream>
#include <iomanip>

using namespace std;

// Função para calcular a série
float calc_serie(int N);

int main() {
    // Defina o valor de N
    int N = 3;

    // Chame a função calc_serie com N e armazene o resultado em 'result'
    float result = calc_serie(N);

    // Imprima o resultado
    cout << "Resultado: " << setprecision(3) << result << endl;
    
    return 0;
}

// Função para calcular a série
float calc_serie(int N) {
    // Inicialize uma variável 'soma' para armazenar o resultado da série
    float soma = 0.0;

    // Use um loop 'for' para calcular a série de 1 a N
    for (int i = 1; i <= N; i++) {
        // Adicione o valor atual da série (i / (N - i + 1)) à variável 'soma'
        soma += static_cast<float>(i) / (N - i + 1);
    }

    // Retorne o resultado da série
    return soma;
}
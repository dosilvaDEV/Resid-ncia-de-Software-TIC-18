#include <iostream>
#include <string>
using namespace std;

// Função para verificar se o número é um palíndromo
string verificarPalindromo(int numero) {
    if (numero < 0) {
        numero = -numero; // Converte para positivo
    }

    string strNumero = to_string(numero);
    int tamanho = strNumero.length();

    for (int i = 0; i < tamanho / 2; i++) {
        if (strNumero[i] != strNumero[tamanho - i - 1]) {
            return "Não é palíndromo";
        }
    }
    
    return "É palíndromo";
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    string mensagem = verificarPalindromo(numero);
    cout << numero << " " << mensagem << endl;

    return 0;
}

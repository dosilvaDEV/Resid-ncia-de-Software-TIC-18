#include <iostream>
#include <string> // Para conversão de inteiro para string
#include <cmath>  // Para usar a função pow

using namespace std;

int main() {
    int numero;
    int soma_digitos = 0;

    cin >> numero; // Lê o número do usuário

    string digitos = to_string(numero); // Converte o número em string
    int expoente = digitos.length(); // Obtém a quantidade de dígitos

    /*
    // Abordagem matemática para contar a quantidade de dígitos
    int expoente = 0;
    while (numero != 0) {
        numero /= 10;
        expoente++;
    }
    */

    // Calcula a soma dos dígitos elevados à potência da quantidade de dígitos
    for (int i = 0; i < expoente; i++) {
        soma_digitos += pow(stoi(digitos.substr(i, 1)), expoente); // Extrai cada dígito, converte para inteiro e eleva
    }

    // Verifica se a soma é igual ao número original
    if (soma_digitos == numero) {
        cout << "É um número de Armstrong" << endl;
    } else {
        cout << "Não é um número de Armstrong" << endl;
    }

    return 0;
}

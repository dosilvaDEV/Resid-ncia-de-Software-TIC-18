#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed para números aleatórios
    int valor = rand() % 100 + 1; // Gera um valor entre 1 e 100
    int n;

    cout << "Tente adivinhar o número entre 1 e 100!" << endl;

    while (true) {
        cout << "Digite seu palpite: ";
        while (!(cin >> n)) { // Verifica se a entrada é válida
            cout << "Por favor, digite um número válido: ";
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o resto da linha
        }

        if (n < valor) {
            cout << "Baixo" << endl;
        } else if (n > valor) {
            cout << "Alto" << endl;
        } else {
            cout << "Correto! Parabéns, você acertou o número." << endl;
            break; // Sai do loop ao acertar o número
        }
    }

    return 0;
}

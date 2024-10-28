#include <iostream>

using namespace std;

int main() {
    int altura;
    cin >> altura;

    char letra = 'A'; // Iniciamos com 'A'

    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << letra;
            letra++; // Incrementa a letra para a próxima posição na sequência alfabética
            
            // Reinicia para 'A' caso ultrapasse 'Z'
            if (letra > 'Z') {
                letra = 'A';
            }
        }
        cout << endl; // Nova linha após cada linha de caracteres
    }

    return 0;
}

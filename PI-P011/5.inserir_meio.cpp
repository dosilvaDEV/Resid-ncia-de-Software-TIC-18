#include <iostream>
using namespace std;

int insere_meio(int *vetor, int &qtd, int elemento);

int main() {
    int vetor[] = {3, 4, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 7;

    tamanho = insere_meio(vetor, tamanho, elemento);

    cout << "Vetor Modificado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}

int insere_meio(int *vetor, int &qtd, int elemento) {
    int novoVetor[qtd + 1];
    int meio = qtd / 2;

    for (int i = 0; i < meio; i++) {
        novoVetor[i] = vetor[i];
    }

    novoVetor[meio] = elemento;

    for (int i = meio; i < qtd; i++) {
        novoVetor[i + 1] = vetor[i];
    }

    for (int i = 0; i <= qtd; i++) {
        vetor[i] = novoVetor[i];
    }

    qtd++;

    return qtd;
}
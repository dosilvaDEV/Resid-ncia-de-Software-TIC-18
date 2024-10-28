#include <iostream>
#include <vector>

using namespace std;

// Função que encontra as posições da letra na string
int* encontra_posicoes(const string& frase, char letra) {
    vector<int> posicoes; // Usamos um vetor dinâmico para armazenar as posições
    int tamanho = frase.length();

    // Itera pela string para encontrar as posições da letra
    for (int i = 0; i < tamanho; i++) {
        if (frase[i] == letra) {
            posicoes.push_back(i); // Adiciona a posição ao vetor
        }
    }

    // Atualiza o tamanho do vetor
    int tamanho_vetor = posicoes.size();

    // Aloca dinamicamente um vetor de inteiros para armazenar as posições
    int* vetor_posicoes = new int[tamanho_vetor+1];

    // Copia as posições do vetor dinâmico para o vetor alocado dinamicamente
    for (int i = 0; i < tamanho_vetor; i++) {
        vetor_posicoes[i] = posicoes[i];
    }
    vetor_posicoes[tamanho_vetor] = tamanho_vetor;

    return vetor_posicoes; // Retorna o vetor de posições
}

int main() {
    string vetor = "minha vida e muito louca";
    char letra = 'a';
    int tamanho = 0;
    
    // Chama a função para encontrar as posições da letra na string
    int* posicoes = encontra_posicoes(vetor, letra);

    tamanho = sizeof(posicoes)/sizeof(posicoes[0]);

    cout <<" A Quantidade de letra '" << letra << "' encontrada é de "<< posicoes[tamanho+1] << endl;

    // Libera a memória alocada dinamicamente para o vetor de posições
    delete[] posicoes;

    return 0;
}
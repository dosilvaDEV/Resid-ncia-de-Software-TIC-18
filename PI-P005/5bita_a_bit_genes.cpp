#include <iostream>
#include <bitset>

// Função para exibir o estado dos genes em formato binário
void mostrarGenes(uint32_t genes) {
    std::cout << "Genes em binario: " << std::bitset<32>(genes) << std::endl;
}

// Função para consultar um gene em uma posição específica
bool consultarGene(uint32_t genes, int posicao) {
    if (posicao < 0 || posicao >= 32) {
        std::cout << "Posicao invalida. Escolha uma posicao entre 0 e 31." << std::endl;
        return false;
    }
    return (genes & (1 << posicao)) != 0;
}

// Função para ativar (1) ou desativar (0) um gene em uma posição específica
void alterarGene(uint32_t &genes, int posicao, bool ativar) {
    if (posicao < 0 || posicao >= 32) {
        std::cout << "Posicao invalida. Escolha uma posicao entre 0 e 31." << std::endl;
        return;
    }
    if (ativar) {
        genes |= (1 << posicao); // Ativa o bit na posição desejada
    } else {
        genes &= ~(1 << posicao); // Desativa o bit na posição desejada
    }
}

int main() {
    uint32_t dadosGeneticos = 0b10110101010111001100101010010101; // Exemplo de dados genéticos

    std::cout << "Dados geneticos iniciais:" << std::endl;
    mostrarGenes(dadosGeneticos);

    // Consulta de um gene específico
    int posicao;
    std::cout << "Digite a posicao do gene para consulta (0 a 31): ";
    std::cin >> posicao;
    if (consultarGene(dadosGeneticos, posicao)) {
        std::cout << "O gene na posicao " << posicao << " está presente (1)." << std::endl;
    } else {
        std::cout << "O gene na posicao " << posicao << " não está presente (0)." << std::endl;
    }

    // Modificação de um gene específico
    std::cout << "Digite a posicao do gene para alterar (0 a 31): ";
    std::cin >> posicao;
    bool ativar;
    std::cout << "Deseja ativar (1) ou desativar (0) o gene? ";
    std::cin >> ativar;
    alterarGene(dadosGeneticos, posicao, ativar);

    std::cout << "Dados geneticos apos a alteracao:" << std::endl;
    mostrarGenes(dadosGeneticos);

    return 0;
}

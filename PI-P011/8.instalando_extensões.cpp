#include <iostream>
using namespace std;

int conta_Primos (int *vet, int qtde);

int main(){
    int vetor[] = {4,5,7,3, 15, 17};
    int tam_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int quantidade_de_n_primos_no_vetor;

    quantidade_de_n_primos_no_vetor = conta_Primos(vetor, tam_vetor);

    cout << "Quantidade de Numeros Primos:" << quantidade_de_n_primos_no_vetor <<endl;;
}

int conta_Primos (int *vet, int qtde){

    if (qtde == 0)
    {
        return 0;
    }
    
    int quanitidade_de_n_primos = 0;
    for (int i = 0; i < qtde; i++)
    {
        if (vet[i] % 2 != 0 && vet[i] % 3 != 0)
        {
            quanitidade_de_n_primos++;
        }
        
    }
    
    return quanitidade_de_n_primos;
    
}
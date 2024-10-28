#include <iostream>
using namespace std;

void multiplica_por_n(int *vet, int qtde, int n);
void exibe_vetor(int *vet, int qtde);

int main()
{
    int vetor[]{1, 2, 3, 4, 5, 6};
    int tam_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int multiplicador = 2;

    multiplica_por_n(vetor, tam_vetor, multiplicador);
    exibe_vetor(vetor, tam_vetor);

    return 0;
}

void multiplica_por_n(int *vet, int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        vet[i] = vet[i] * n;
    }
}

void exibe_vetor(int *vet, int qtde)
{
    for (int i = 0; i < qtde; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}
#include <iostream>


using namespace std;

int *intercala(int *vet1, int tam1, int *vet2, int tam2);

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    int b[] = {2, 4, 6, 8, 10};

    int tam_a = sizeof(a) / sizeof(a[0]);
    int tam_b = sizeof(b) / sizeof(b[0]);

    int *result = intercala(a, tam_a, b, tam_b);

    // Imprime o array intercalado e ordenado
    for (int i = 0; i < tam_a + tam_b; i++)
    {
        cout << endl << result[i] << " ";
    }
    cout <<endl;
    // Libera a memória alocada 
    delete[] result;
    
}
int *intercala(int *vet1, int tam1, int *vet2, int tam2){
    int *result = new int[tam1 + tam2];
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2)
    {
        if (vet1[i] < vet2[j])
        {
            result[k++] = vet1[i++];
        }
        else
        {
            result[k++] = vet2[j++];
        }
    }

    // Copia os elementos restantes de vet1, se sobrou
    while (i < tam1)
    {
        result[k++] = vet1[i++];
    }

    // Copie os elementos restantes de vet2, se sobrou
    while (j < tam2)
    {
        result[k++] = vet2[j++];
    }

    return result;
}
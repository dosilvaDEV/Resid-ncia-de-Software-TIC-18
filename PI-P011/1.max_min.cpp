#include <iostream> 


void maxmin (int vetor[], int n,int &maximo, int &minimo);

using namespace std;
int main (){
    int maximo =0;
    int minimo = 0;

    int vetor[] = {2, 3,10, 1, 4,8};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    maxmin(vetor,n, maximo, minimo);
    cout << "O Valor maximo: " << maximo <<endl<< "O Valor minimo: " << minimo << endl;

    return 0;
}

void maxmin (int vetor[], int n, int &maximo, int &minimo){

    minimo = vetor[0];//// 1
    for (int i = 0; i<n;i++){

        if (minimo > vetor[i+1]){//minimo vale 2 vetor vale 3
            minimo = vetor[i+1];
        }
         if (maximo < vetor[i]){
            maximo = vetor[i];
        }
    }


}
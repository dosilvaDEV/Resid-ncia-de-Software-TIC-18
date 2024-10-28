#include <iostream>

using namespace std;

int main() {
    int n;
    int soma = 0;

    cout << "Digite um número: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++) {//n/2 quero a metade pq os numeros, e antes da metade teremos inteiros, após a metade serão todos racionais.
        if (n % i == 0) {
            soma += i;
        }
    }

    if (n == soma) {
        cout << "É um número perfeito" << endl;
    } else {
        cout << "Não é um número perfeito" << endl;
    }

    return 0;
}
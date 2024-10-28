#include <iostream>
#include <cmath> // Para usar abs()
using namespace std;

void imprimirDivisores(int numero) {
    int numAbs = abs(numero); // Valor absoluto

    for (int i = 1; i <= numAbs; i++) {
        if (numAbs % i == 0) {
            cout << i << endl;      // Divisor positivo
            if (numero < 0) {
                cout << -i << endl; // Divisor negativo, se o número original for negativo
            }
        }
    }
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Divisores de " << numero << ":" << endl;
    imprimirDivisores(numero);

    return 0;
}

#include <iostream>
using namespace std;

void fibonacciRecursivo(int primeiroTermo, int segundoTermo, int n) {
    int proximo = primeiroTermo + segundoTermo;

    if (proximo > n) { // condição de parada
        return;
    }

    cout << proximo << endl;
    
    // chamada recursiva com o próximo termo
    fibonacciRecursivo(segundoTermo, proximo, n);
}

int main() {
    int n;
    cout << "Digite o valor limite para a sequência de Fibonacci: ";
    cin >> n;

    int primeiroTermo = 0;
    int segundoTermo = 1;

    cout << primeiroTermo << endl
         << segundoTermo << endl;

    fibonacciRecursivo(primeiroTermo, segundoTermo, n);

    return 0;
}

#include <iostream>
using namespace std;

bool ehPrimo(int n) { // Verifica se um número é primo recursivamente
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 2; i <= 100; i++) {
        if (ehPrimo(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

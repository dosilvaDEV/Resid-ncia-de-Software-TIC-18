#include <iostream>
#include <climits>
using namespace std;

int main() {
    //unsigned int - Um tipo de dado inteiro sem sinal, nada de números negativos 
    unsigned int ui = UINT_MAX;// representa o maior valor possível, que é 4.294.967.295 em sistemas de 32 bits.

    cout << "Menor valor representado por uma variavel unsigned int: 0" << endl;
    cout << "Maior valor representado por uma variavel unsigned int: " << ui << endl;

    return 0;
}
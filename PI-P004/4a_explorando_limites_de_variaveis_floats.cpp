#include <iostream>
#include <limits>
using namespace std;

int main() {
    //float usa 32 bits para armazenar um número em ponto flutuante
    float menorValor = numeric_limits<float>::epsilon(); //2^(-23) ~ 1.1920929e-07.
    float maiorValor = numeric_limits<float>::max(); //2^(127) * (2 - epsilon) ~ 3.4028235e+38.

    cout << "Menor valor representável por um float: " << menorValor << endl;
    cout << "Maior valor representável por um float: " << maiorValor << endl;

    return 0;
    // Devido à limitação de precisão do tipo float, ele não é adequado para todas as aplicações, 
    //especialmente aquelas que exigem alta precisão numérica. 
}
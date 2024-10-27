#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //float usa 32 bits para armazenar um número em ponto flutuante
    float pif = 3.14159265358979323846264338327950288419; ////2^(127) * (2 - epsilon) ~ 3.4028235e+38.
    
    cout << "Pi: " << setprecision(2)  << pif << endl;
    cout << "Pi: " << setprecision(4)  << pif << endl;
    cout << "Pi: " << setprecision(8)  << pif << endl;
    cout << "Pi: " << setprecision(16) << pif << endl;

    return 0;
    // Devido à limitação de precisão do tipo float, ele não é adequado para todas as aplicações, 
    //especialmente aquelas que exigem alta precisão numérica. 
}
#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //float usa 32 bits para armazenar um número em ponto flutuante
    float pif = 3.14159265358979323846264338327950288419; ////2^(127) * (2 - epsilon) ~ 3.4028235e+38.
    std::cout << std::fixed << std::setprecision(22); 
    cout <<"Pi: " << pif << endl;

    return 0;
    // Devido à limitação de precisão do tipo float, ele não é adequado para todas as aplicações, 
    //especialmente aquelas que exigem alta precisão numérica. 
}

// #include <iostream>
// #include <iomanip>
// #include <cmath>
// // int main() {
// //     double pi = M_PI; // Uso da constante da biblioteca cmath para obter o valor de pi

// //     std::cout << std::fixed << std::setprecision(25); // Configura a precisão para 25 casas decimais
// //     std::cout << "Valor de pi com 25 casas decimais: " << pi << std::endl;

// //     return 0;
// // }
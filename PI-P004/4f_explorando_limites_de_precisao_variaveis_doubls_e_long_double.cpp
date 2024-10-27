#include <iostream>
#include <iomanip>

int main() {
    double num1 = 1.0;
    long double num2 = 1.0;

    for (int i = 0; i < 200; ++i) {
        num1 = num1 * 2.0;
        num2 = num2 * 2.0;
    }

    std::cout << "Valor de num1 (double):      " << std::setprecision(20) << num1/0.0000000001 << std::endl;
    std::cout << "Valor de num2 (long double): " << std::setprecision(20) << num2/0.0000000001 << std::endl;

    return 0;
}



    // A principal diferença entre eles é a precisão. O tipo long double
    // geralmente oferece uma maior precisão do que o double, o que 
    // significa que ele pode armazenar números com mais casas decimais. 
    // No entanto, a quantidade de precisão pode variar de sistema para sistema.

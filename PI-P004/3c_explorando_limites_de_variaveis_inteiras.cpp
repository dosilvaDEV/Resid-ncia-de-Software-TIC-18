#include <iostream>
#include <climits>

using namespace std;
int main() {

    unsigned long int uli = ULONG_MAX;// 18446744073709551615 64 bits valores não negativos
    
    //long int menor = LONG_MIN;  -9223372036854775808 32 bits.
    //long int maior = LONG_MAX; 9223372036854775807 32 bits.

    long int li = uli; // Tentativa de atribuir uli a li
    uli = li; // Tentativa de atribuir li de volta a uli
    
    std::cout << "Valor de li após a primeira atribuição: " << li << std::endl;
    std::cout << "Valor de uli após a segunda atribuição: " << uli << std::endl;

    // //Valor menor ou igual ao valor máximo de long int: 
    // Se o valor de unsigned long int for menor ou igual ao valor máximo representável 
    // por long int a atribuição ocorrerá sem problemas.
    // O valor será simplesmente copiado para a variável long int.

    // No nosso caso Valor unsigned long int é maior do que o valor máximo de long int: 
    // Se o valor de unsigned long int for maior do que o valor máximo representável
    // por long int, o comportamento é indefinido. Isso significa que o 
    // resultado não é previsível e pode variar de um compilador ou sistema para outro. 
    // Em alguns casos, você pode obter resultados incorretos ou valores negativos.

    //Nesse programa no unbuto o valor para o li foi de -1.
    //ja o uli foi de unsigned long int;
    
    return 0;
}
 
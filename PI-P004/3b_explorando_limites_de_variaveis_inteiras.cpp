#include <iostream>
#include <climits>

int main() {
    unsigned long int uli = ULONG_MAX;// Maior valor para unsigned long int
    //o tipo "unsigned" (sem sinal) significa que a variável só pode armazenar
    // números inteiros não negativos, ou seja, valores maiores ou iguais a zero com maximo em 
    //18446744073709551615, 64 bits.
    std::cout << "O menor valor representável por um unsigned long  deve ser int >= 0  "<< std::endl;
    std::cout << "O maior valor representável por um unsigned long int:  " << uli << std::endl;

    return 0;
}
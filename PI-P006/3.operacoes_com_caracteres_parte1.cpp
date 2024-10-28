#include <iostream>
#include <iomanip> // Para std::oct e std::hex
#include <cctype>  // Para isprint, isupper, islower e isdigit

int main() {
    char ch1, ch2, ch3;

    // Passo b: Obter caracteres do usuário
    std::cout << "Digite o primeiro caractere: ";
    std::cin >> ch1;
    std::cout << "Digite o segundo caractere: ";
    std::cin >> ch2;

    // Passo c: Caractere que antecede ch1
    ch3 = ch1 - 1; // Caractere anterior a ch1

    // Verifica se ch3 é imprimível
    if (!isprint(ch3)) {
        ch3 = '_'; // Substitui por '_' se não for imprimível
    }

    std::cout << "Caractere anterior a ch1:" << std::endl;
    std::cout << "Decimal: " << static_cast<int>(ch3) << std::endl;
    std::cout << "Octal: " << std::oct << static_cast<int>(ch3) << std::dec << std::endl;
    std::cout << "Hexadecimal: " << std::hex << static_cast<int>(ch3) << std::dec << std::endl;
    std::cout << "Caractere: " << ch3 << std::endl;

    // Passo d: Caractere que antecede ch2
    ch3 = ch2 - 1; // Caractere anterior a ch2

    // Verifica se ch3 é imprimível
    if (!isprint(ch3)) {
        ch3 = '_'; // Substitui por '_' se não for imprimível
    }

    printf("Caractere anterior a ch2:\n");
    printf("Decimal: %d\n", ch3);
    printf("Octal: %o\n", ch3);
    printf("Hexadecimal: %x\n", ch3);
    printf("Caractere: %c\n", ch3);

    // Passo e: Verifica se ch1 é letra maiúscula
    ch3 = isupper(ch1) ? 'A' : ' ';
    std::cout << "Valor de ch3 (baseado em ch1): " << ch3 << std::endl;

    // Passo f: Verifica se ch2 é letra minúscula
    ch3 = islower(ch2) ? 'a' : ' ';
    std::cout << "Valor de ch3 (baseado em ch2): " << ch3 << std::endl;

    // Passo g: Verifica se ch1 ou ch2 são dígitos
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    std::cout << "Valor de ch3 (baseado em ch1 ou ch2): " << ch3 << std::endl;

    return 0;
}

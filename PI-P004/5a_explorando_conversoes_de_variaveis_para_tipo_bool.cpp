#include <iostream>

int main() {
    // Tipos de dados inteiros
    int intValue = 0;
    long long longValue = 2;
    short shortValue = 5;
    unsigned int unsignedIntValue = 0;
    
    // Tipos de dados em ponto flutuante
    float floatValue = 2.0;
    double doubleValue = 5.0;
    
    // Conversão implícita em contexto booleano
    bool boolValue;

    boolValue = intValue;          // Valor inteiro 0 é convertido em false 0
    std::cout << "intValue em contexto booleano: " << boolValue << std::endl;

    boolValue = longValue;         // Valor longo 2 é convertido em true 1
    std::cout << "longValue em contexto booleano: " << boolValue << std::endl;

    boolValue = shortValue;        // Valor short 5 é convertido em true 1
    std::cout << "shortValue em contexto booleano: " << boolValue << std::endl;

    boolValue = unsignedIntValue;  // Valor inteiro sem sinal 0 é convertido em false 0
    std::cout << "unsignedIntValue em contexto booleano: " << boolValue << std::endl;

    boolValue = floatValue;        // Valor de ponto flutuante 2.0 é convertido em true 1
    std::cout << "floatValue em contexto booleano: " << boolValue << std::endl;

    boolValue = doubleValue;       // Valor de ponto flutuante 5.0 é convertido em true 1
    std::cout << "doubleValue em contexto booleano: " << boolValue << std::endl;

    return 0;
}
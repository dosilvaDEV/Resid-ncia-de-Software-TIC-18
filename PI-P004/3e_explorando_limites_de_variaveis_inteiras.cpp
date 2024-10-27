#include <iostream>
#include <climits>
using namespace std;
int main() {
    
    long int li = LONG_MIN;// -9223372036854775808 64 bits.
    unsigned int ui = li;//  4.294.967.295 32 bits.
    li = ui;

    //li = LONG_MAX;
    //ui = li;
    //li = ui;
    cout << "O valor representado por uma variavel long int: " << li << endl;
    cout << "O valor representado por uma variavel unsigned int: " << ui << endl;

    return 0;

// 1. **Definição dos Tipos de Dados**:
//    - `long int`: Um tipo de dado inteiro assinado que pode 
//representar valores inteiros positivos e negativos. O tamanho
// do `long int` pode variar dependendo da arquitetura do sistema, 
//mas é geralmente de 32 ou 64 bits.
//    - `unsigned int`: Um tipo de dado inteiro sem sinal que armazena 
// apenas valores inteiros não negativos. Geralmente, tem um tamanho de 32 bits.

// 2. **Atribuição de `LONG_MAX` a `li`**:
//    - `LONG_MAX`: Essa constante representa o maior valor que um `long int` 
//     pode armazenar em seu sistema. Geralmente, é igual a `2^N - 1`, onde `N` 
//     é o número de bits em um `long int`.
//    - Em sistemas de 32 bits, `LONG_MAX` é igual a `2.147.483.647`.
//    - Em sistemas de 64 bits, `LONG_MAX` é igual a `9.223.372.036.854.775.807`.
//    - Você atribui o valor de `LONG_MAX` (que pode ser 2.147.483.647 ou 9.223.372.036.854.775.807) à variável `li`.

// 3. **Atribuição de `li` a `ui`**:
//    - Você tenta atribuir o valor de `li` à variável `ui`, que é do tipo `unsigned int`.
//    - Se o valor de `li` for maior que o valor máximo representável por um `unsigned int` (4.294.967.295 em sistemas de 32 bits), ocorrerá um overflow. O valor será truncado para o máximo representável por um `unsigned int`.

// 4. **Atribuição de `ui` de volta a `li`**:
//    - Você atribui o valor de `ui` (que é 4.294.967.295 após o overflow) de volta à variável `li`.
//    - Como `li` é um `long int`, ele pode armazenar o valor de `ui` sem problemas.

// Portanto, se o sistema estiver usando 32 bits para `long int`, a saída será `li = 4294967295`,
// que é o valor máximo representável por um `unsigned int` de 32 bits.
// Se o sistema estiver usando 64 bits para `long int`, a saída será o mesmo valor. 
//O resultado depende do tamanho de `long int` em DO sistema e do tratamento de overflows(NESSE CASO O OVERGLOWS FOI 0)
}
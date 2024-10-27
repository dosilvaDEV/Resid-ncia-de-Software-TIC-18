#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Configurar a codificação para UTF-8
    // setlocale(LC_ALL, "pt_BR.UTF-8");
    // char c;
    // cin >> c;

    // Configurar a codificação para UTF-8
    setlocale(LC_ALL, "en_US.UTF-8");

    // Armazenar os caracteres especiais em variáveis
    char c_cedilha = 'ç';
    char c_til = 'ã';

    cout << "Caracteres Especiais da Tabela Estendida:" << endl;
    cout << c_cedilha << endl;
    cout << c_til << endl;


   // cout << "'" << c << "'" << "-"  << dec << int(c) << "-" << hex << int(c) << endl;

    // cout << "Tabela de Caracteres Especiais da Tabela Estendida:" << endl;
    // cout << "+--------+--------+" << endl;
    // cout << "| Caráter| Código |" << endl;
    // cout << "+--------+--------+" << endl;
    // for (int i = 128; i <= 255; i++) {
    //     cout << "|   " << char(i) << "    |   " << i << "    |" << endl;
    // }
    // cout << "+--------+--------+" << endl;

    return 0;
}
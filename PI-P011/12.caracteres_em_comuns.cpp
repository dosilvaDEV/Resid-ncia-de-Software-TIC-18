#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    // Converte as strings em conjuntos para facilitar a busca de caracteres comuns
    unordered_set<char> conjuntoA(A.begin(), A.end());
    unordered_set<char> conjuntoB(B.begin(), B.end());

    // Cria um conjunto para armazenar os caracteres comuns
    unordered_set<char> caracteresComuns;

    // Encontra os caracteres comuns
    for (char c : conjuntoA) {
        if (conjuntoB.find(c) != conjuntoB.end()) {
            caracteresComuns.insert(c);
        }
    }

    // Converte o conjunto de caracteres comuns de volta para uma string
    string stringComum(caracteresComuns.begin(), caracteresComuns.end());

    return stringComum;
}

int main() {
    string stringA = "abcde";
    string stringB = "cdefg";
    string resultado = caracteresComuns(stringA, stringB);
    cout << resultado << endl;  // Isso imprimirá "cde"

    return 0;
}
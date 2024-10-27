#include <iostream>
using namespace std;

int main() {
    char ch1;//
    cin >> ch1;

    
    string resultado = (int(ch1) >= 97 && int(ch1) <= 122) ? "Letra minuscula" :
                           (int(ch1) >= 65 && int(ch1) <= 90) ? "Letra Maiuscula" :
                           (int(ch1) >= 48 && int(ch1) <= 57) ? "Digito" :
                           "Outro tipo";

    cout << resultado << "\n";

    return 0;
}
// main.cpp
#include <iostream>


using namespace std;
int fatorial(int n);
int main() {
    int a, b, c;
    cout << "Digite 3 valores para calcular o fatorial: ";
    cin >> a>>b>>c;

    if (a < 0 || b < 0 || c < 0) {
        cout << "O fatorial não está definido para números negativos." << std::endl;
    } else {
        int resultado;
        resultado = fatorial(a);
        cout << "O fatorial de " << a << " é " << resultado << endl;
        resultado = fatorial(b);
        cout << "O fatorial de " << b << " é " << resultado << endl;
        resultado = fatorial(c);
        cout << "O fatorial de " << c << " é " << resultado << endl;
    }

    return 0;
    

}
int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
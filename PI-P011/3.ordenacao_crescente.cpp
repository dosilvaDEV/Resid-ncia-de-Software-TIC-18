#include <iostream>

using namespace std;

void ordenar(float &a, float &b, float &c, float &d);

int main() {
    float a = 4, b = 1, c = 3, d = 8;
    ordenar(a, b, c, d);
   
    cout << a << "-"<< b <<"-" << c <<"-" << d << endl;
    return 0;
}

void ordenar(float &a, float &b, float &c, float &d) {
    float vetor[4] = {a, b, c, d};

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (vetor[i] > vetor[j]) {
                
                float temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
            
        }
        
    }
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];
    d = vetor[3];
}
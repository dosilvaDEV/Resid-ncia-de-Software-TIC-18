#include <iostream>
#include <cmath> // Para usar a função sqrt

using namespace std;

// Definição da struct "Ponto" para representar as coordenadas (x, y)
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(Ponto& ponto1,Ponto& ponto2);

int main() {
    Ponto pontoA, pontoB;
    
    cout << "Digite as coordenadas do primeiro ponto (x,y): ";
    cin >> pontoA.x >> pontoA.y;

    // Entrada de dados para o segundo ponto
    cout << "Digite as coordenadas do segundo ponto (x,y): ";
    cin >> pontoB.x >> pontoB.y;

    // Calcula a distância entre os dois pontos
    double distancia = calcularDistancia(pontoA, pontoB);

    // Exibe a distância
    cout << "A distância entre os dois pontos é: " << distancia << endl;

    return 0;
}

double calcularDistancia(Ponto& ponto1, Ponto& ponto2) {
    double diferencaX = ponto1.x - ponto2.x;
    double diferencaY = ponto1.y - ponto2.y;
    return sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}
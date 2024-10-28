#include <iostream>
#include <cmath>
using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    // Construtores
    Ponto() : x(0), y(0) {} // Construtor padrão
    Ponto(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Métodos para definir coordenadas
    void setCoordenadas(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Métodos para obter coordenadas
    double getX() const { return x; }
    double getY() const { return y; }

    // Método para calcular a distância até a origem
    double calcularDistancia() const {
        return sqrt(x * x + y * y);
    }
};

// Função principal para testar a classe
int main() {
    Ponto p1(3, 4);
    cout << "Distância de (3, 4) até a origem: " << p1.calcularDistancia() << endl;

    Ponto p2(-2, 7);
    p2.setCoordenadas(1, 1);
    cout << "Distância de (1, 1) até a origem: " << p2.calcularDistancia() << endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
    cout << "Distância de (0, 3) até a origem: " << p3.calcularDistancia() << endl;
    cout << "Distância de (4, 0) até a origem: " << p4.calcularDistancia() << endl;

    Ponto pontos[3];
    pontos[0].setCoordenadas(2, 2);
    pontos[1].setCoordenadas(-1, 5);
    pontos[2].setCoordenadas(0, 0);

    for (int i = 0; i < 3; ++i) {
        double distancia = pontos[i].calcularDistancia();
        cout << "Distância do ponto " << i + 1 << " até a origem: " << distancia << endl;
    }

    Ponto p5;
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;
    p5.setCoordenadas(8, -3);
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;

    return 0;
}

#include <iostream>

using namespace std;

// Função para converter temperatura de Celsius para Fahrenheit
double converterCelsiusParaFahrenheit(double temperatura_em_Celsius);

// Função para entrada/saída
void entradaSaida()
{
    double temperatura_em_Celsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> temperatura_em_Celsius; 
    double temperatura_em_Fahrenheit = converterCelsiusParaFahrenheit(temperatura_em_Celsius);
    cout << "A temperatura em graus Fahrenheit é: " << temperatura_em_Fahrenheit << endl;
}

int main()
{
    entradaSaida();
    return 0;
}

double converterCelsiusParaFahrenheit(double temperatura_em_Celsius)
{
    return (temperatura_em_Celsius * 9.0 / 5.0) + 32.0;
}
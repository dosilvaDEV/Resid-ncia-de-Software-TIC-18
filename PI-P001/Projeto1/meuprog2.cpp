#include<iostream>

using namespace std;
//Este programa imprime as operações básicas da matemática com o adcional do resto da divisão na linguagem C++
int main (){
    float a, b;
    cout << "********* Digite dois numeros floateiros ********* " <<endl;
    cout <<"Valor A:";
    cin >> a;
    cout <<"Valor B:";
    cin >> b;
    cout <<endl;
    cout<< "********* Soma, Subtracao, Multiplicacao, Divisao e Resto.  ********* "<<endl;
    cout << "Soma = "<< a+b <<endl;
    cout << "Subtracao = " << a-b <<endl;
    cout << "Multiplicacao = " << a*b << endl;
    cout << "Divisao = " << a/b << endl;
    cout << "Resto = " << a%b << endl;
    cout<<"********* Fim. ********* "<<endl;

}
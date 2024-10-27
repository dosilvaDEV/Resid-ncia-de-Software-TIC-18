#include<iostream>
#include<iomanip> //utilização da configuração setprecision e fixed;
using namespace std;
//Este programa muda a declaração das variaveis decladas no arquivo meuprog2 do tipo int para float de forma manual
 //e imprime as operações básicas da matemática na linguagem C++
int main (){
    float a, b;
    cout << "********* Digite dois numeros float ********* " <<endl;
    cout <<"Valor A:";
    cin >> a;
    cout <<"Valor B:";
    cin >> b;
    cout <<endl;

    //fixando valores de saída de uma casa decimais apos a a vingula ou ponto para todos os cout
    cout << fixed <<setprecision(1);

    cout<< "********* Soma, Subtracao, Multiplicacao, Divisao e Resto.  ********* "<<endl;

    cout << "Soma = "<< a+b <<endl;
    cout << "Subtracao = " << a-b <<endl;
    cout << "Multiplicacao = " << a*b << endl;
    cout << "Divisao = " << a/b << endl;
   
    cout<<"********* Fim. ********* "<<endl;

}
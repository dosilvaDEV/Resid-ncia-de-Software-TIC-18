#include <iostream>

using namespace std;

int main(){

    
   //Definição
   // um m só é multiplo de um n se e somente se, existir um inteiro k, tal que:
   // m = n.k ou m/n  = k com resto = 0, já que a afirmação é fechada nos numeros inteiros;
   //se eu quero saber se 1 é multiplo de 3, devo achar o inteiro k que valide a afirmação e para isso
   // 1/3 = k, k = 0,333... como a divisão termina no campos dos numeros racionais é falso.

   // Pontanto podemos concluir que para:
   // m/k = k, onde k e um inteiro a firmação é valida. 
   // m/k = k, onde k é diferente um inteiro a afirmação é falso.
   // utilizaremos o % para fazer essa verificação na divisão de inteiros.

   for (int i = 1; i <= 100; i++){

    // i/3 = k, k deve ser um inteiro.
    if( i % 3 ==0){
        cout << "Fizz" << endl;
    }
    // i/5 = k, k deve ser um inteiro.
    if( i % 5 ==0){
        cout << "bizz" << endl;
    }
   }
   
    return 0;
}
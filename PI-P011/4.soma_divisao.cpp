#include <iostream> 
using namespace std;

int soma (int x, int y);
int subtracao(int x, int y);

int main (){
    int x = 2, y = 3;
    
    x = soma(x,y);
    y = subtracao(x,y);

    cout << "soma: " << x << endl << "subtracao: " << y <<endl;
    return 0;
}

int soma(int x, int y){
    
    int result = x + y;

    return result;
}

int subtracao(int a,int b){
  
   int result = a-b;

   return result;
}
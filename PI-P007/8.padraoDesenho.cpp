#include <iostream>

using namespace std;

int main ()
{
   
    
     //padrão = n2 area  do quadrado
    for (int i = 1; i <= 4; i++)
    {
        //Linha 1, 2, 3, 4
        for (int j = 1; j <= 4; j++){
            cout << "* "; //4 asteriscos
        }
        cout<<endl;
    }
     cout<<endl;
      //linha n == i de i for i = 1 apenas * asterisco e i = 2* assim sucessivamente até 4*  triangulo
    for (int i = 1; i <= 4; i++)
    {
       
        for (int j = 1; j <= i; j++){
            cout << "* "; //4 asteriscos
        }
        cout<<endl;
    }
     cout<<endl;

//borda do quadrado
    for (int j = 1; j <= 4; j++) 
    {
    
        for (int i = 1; i <= 4; i++)
        {
            if( i >1 && i<4 && j!=1 && j!=4){
                cout <<"  ";
            }else {
                cout <<"* ";
            }
        }
        cout<< endl;
    }
    
    
}
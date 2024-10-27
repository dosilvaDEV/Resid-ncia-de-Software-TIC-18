#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float pif = 3.14159265358979323846264338327950288419; ////2^(127) * (2 - epsilon) ~ 3.4028235e+38.
    double pid = 3.14159265358979323846264338327950288419; 
    cout <<"Float Pi: " << setprecision(2)<<pif << endl;
    cout <<"float Pi: " << setprecision(4)<<pif << endl;
    cout <<"float Pi: " << setprecision(8)<<pif << endl;
    cout <<"float Pi: " << setprecision(16)<<pif << endl;
    
    cout <<"double Pi: " << setprecision(2)<<pid << endl;
    cout <<"double Pi: " << setprecision(4)<<pid << endl;
    cout <<"double Pi: " << setprecision(8)<<pid << endl;
    cout <<"double Pi: " << setprecision(16)<<pid << endl;
   
    //existe diferença, o double é muito mais preciso do que o float
    //que partir da 7 casa com 16 casa decimais começa a arredondar os valor de decimais 
    //de pi.
    //Para a saida com 8 casas decimais o double e o float arredondam na precisão 8, o valor 6 para 7;
    //para os demais a saida é igual para ambos;

    return 0;
}
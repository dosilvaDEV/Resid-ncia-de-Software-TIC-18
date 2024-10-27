#include <iostream>
#include <climits>
using namespace std;
int main() {

    long int li = LONG_MIN;//  -9223372036854775808 64 bits.
    cout << "O Maior valor representavel por uma variavel long int: " << li << endl;

    li = LONG_MAX; //9223372036854775807 64 bits
    cout << "O menor valor representavel por uma variavel long int: " << li << endl;

    return 0;
    //Para sistemas de 64 bits e a comentada acima;
}
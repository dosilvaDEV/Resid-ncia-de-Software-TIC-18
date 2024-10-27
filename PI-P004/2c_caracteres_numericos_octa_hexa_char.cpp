#include <iostream>
#include <iomanip> // Para usar a formatação hexadecimal e octal

using namespace std;

int main()
{
    char c;
    cin >> c;
    
    cout << "'" << c << "'" << "-"  << oct << int(c) << "-" << hex << int(c) <<endl;
        
    return 0;
}
# include <iostream>

using namespace std;

int main ()
{
    for (char i='0'; i <= '9'; i++)
        cout << "'" << i << "'" << "-" << dec << int(i) << endl;
}
#include <iostream> // ïîäêëþ÷àåì cin/cout
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    int a = 0, b=0;
    
    for (int i = 1; i < 101; i++) {
        a += i * i;
    }

    for (int i = 1; i < 101; i++) {
        b += i;
    }

    b = pow(b, 2);

    int r = b - a;
    cout << b << " - " << a << " = " << r << endl;

    //system ("pause");
}

#include <iostream> // ïîäêëþ÷àåì cin/cout
#include <math.h>
#include <stdlib.h>

using namespace std;

void HELP_ME(int s, int oi) {
    int p = oi;
    int a = 0, b = 0, c = 0;
    int rrrr = 0;
    for (int n = 1; n < p; n++) {
        for (int m = 2; m < (p + 1); m++) {
            if (m > n) {
                a = 2 * n * m;
                b = pow(m, 2) - pow(n, 2);
                c = pow(m, 2) + pow(n, 2);

                if (a + b + c == s) {
                    cout << "a= " << a << "; b= " << b << "; c= " << c << endl;
                    rrrr = a * b * c;
                    cout << "A*B*C= " << rrrr << endl;
                    break;
                }
            }
        }
    }
    p += oi;
}

int main()
{
    //setlocale(LC_ALL, "Russian");

    int summ = 1000;
    int step = 100;

    HELP_ME(summ, step);

    
    //system ("pause");
}

#include <iostream> // ïîäêëþ÷àåì cin/cout
#include <fstream> 

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    int N, a=0, d=1;

    cout << "Enter number" << endl;
    cin >> N;

    while (N)
    {
        a += (N % 2) * d;
        N = N / 2;
        d = d * 10;
    }
    cout << a << endl;


    //system ("pause");
}

#include <iostream> // ïîäêëþ÷àåì cin/cout
#include <fstream> 

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    int a, b;

    cout << "Enter à" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;

    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }

    //system ("pause");
}

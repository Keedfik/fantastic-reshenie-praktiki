#include <iostream> // подключаем cin/cout
#include <fstream> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;

    cout << "¬ведите натуральное число а" << endl;
    cin >> a;
    cout << "¬ведите натуральное число b" << endl;
    cin >> b;

    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }

    system ("pause");
}
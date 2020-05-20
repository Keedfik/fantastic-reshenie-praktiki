#include <iostream> // ïîäêëþ÷àåì cin/cout
#include <fstream> 

using namespace std;

void Factorial(int L) {

    const int size = 5000;
    int m[size] = {};
    m[0] = 1;

    for (int i = 1; i <= L; i++) {
        for (int k = 0; k < size; k++)
            m[k] = m[k] * i;
        for (int k = 0; k < size; k++)
            if (m[k] >= 10) {
                m[k + 1] += m[k] / 10;
                m[k] = m[k] % 10;
            }
    }

    bool g = true;
    for (int i = size - 1; i >= 0; i--) {
        if (m[i] == 0 && g == true)
            continue;
        g = false;
        cout << m[i];
    }
    cout << endl;
};


int main()
{
    //setlocale(LC_ALL, "Russian");

    int N;
    cout << "Enter number: ";
    cin >> N;

    Factorial(N);

    //system ("pause");
}

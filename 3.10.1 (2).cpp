#include <iostream> // подключаем cin/cout
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    const int size = 5000;
    int m[size] = {};
    m[0] = 1;

    int N = 100;
    int count = 0;


    for (int i = 1; i <= N; i++) {
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

    for (int i = 0; i < size; i++) {
        count += m[i];
    }

    cout << "Summ = " << count << endl;




    //system("pause");
}
#include <iostream> // ���������� cin/cout


using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    long int F1 = 1, F2 = 2, F = 0;
    long double S = 2;
    do {
        F = F1 + F2;
        if (F % 2 == 0) S += F;
        F1 = F2;
        F2 = F;
    } while (F <= 4000000);

    cout << "����� ���� ������ ����� ���������,������������� 4 ���'�  =  " << S << endl;

    system ("pause");
}
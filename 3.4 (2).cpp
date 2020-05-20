#include <iostream> // подключаем cin/cout
#include <fstream> 

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    int N, i=2, dv;
    std::cout << "Enter number: ";
    std::cin >> N;
    int dvo[200];
    int t = 0;
    while (N > 1)
    {
        dv = N % i;
        dvo[t] = dv;
        N /= i;
        t++;
    }
    t--;
    std::cout << "WOW WHAT'S THIS??" << endl;
    std::cout << 1;
    while (t >= 0)
    {
        std::cout << dvo[t];
        t--;
    }
    std::cout << endl;
    //system("pause");
}
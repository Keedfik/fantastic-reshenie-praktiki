#include <iostream> // подключаем cin/cout
#include <fstream> 

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    int a, b;

    std::cout << "Enter a" << endl;
    std::cin >> a;
    std::cout << "Enter b" << endl;
    std::cin >> b;

    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            std::cout << i << endl;
            break;
        }
    }

    //system("pause");
}
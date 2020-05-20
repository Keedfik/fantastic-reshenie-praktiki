#include <iostream> // подключаем cin/cout
#include <stdio.h> 

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");

    std::string txt;
    int symbol = 0;

    std::cout << "Enter your string" << endl;
    std::cin>>txt;

    for (int i = 0; i < 1000; i++) {
        if (txt[i] == '\0') {
            break;
        }
        else if (txt[i] == 'f') {
            symbol++;
        }
    }

    if (symbol == 1) {
        std::cout << "-1" << endl;
    }
    else if (symbol == 0) {
        std::cout << "-2" << endl;
    }
    else {
        std::cout << symbol + 1 << endl;
    }

    //system("pause");
}
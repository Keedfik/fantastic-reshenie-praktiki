#include <iostream> // ���������� cin/cout
#include <stdio.h> 
#include <string>

using namespace std;

void  IsPalindrom(string txt) {

    int d = txt.length();
    bool prov = true;

	for (int i = 0; i < d; i++) {
		if (txt[i] != txt[d - i - 1]) {
			prov = false;
			break;
		}
        else {
            prov = true;
        }
	}

    if (prov == true) {
        cout << "���������" << endl;
    }
    else {
        cout << "�� ���������" << endl;
    }

};


int main()
{
    setlocale(LC_ALL, "Russian");

    string txt;
    cout << "������� ����� ";
    cin>>txt;

    IsPalindrom(txt);

    system ("pause");
}
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, d, x1, x2; 
    cout << "a= "; 
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    if (a == 0) {
        x1 = -(c / b);
        cout << "x1 = x2 = " << x1 << "\n";
    }
    else {
        d = b * b - 4 * a * c; 
        if (d > 0) 
        {
            x1 = ((-b) + sqrt(d)) / (2 * a);
            x2 = ((-b) - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
        if (d == 0) 
        {
            x1 = -(b / (2 * a));
            cout << "x1 = x2 = " << x1 << "\n";
        }
        if (d < 0) 
            cout << "D < 0, no korni";
    }
    //system("pause");
}

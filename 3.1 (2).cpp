#include <iostream> // ďîäęëţ÷ŕĺě cin/cout
#include <cmath> // ďîäęëţ÷ŕĺě sqrt

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, d, x1, x2; // Îáú˙âë˙ĺě ďĺđĺěĺííűĺ ń ďëŕâŕţůĺé ňî÷ęîé.

    cout << "a= "; // Ââîäčě čńőîäíűĺ äŕííűĺ
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
        d = b * b - 4 * a * c; // Đŕńń÷čňűâŕĺě äčńęđčěčíŕíň
        if (d > 0) // Óńëîâčĺ ďđč äčńęđčěčíŕíňĺ áîëüřĺ íóë˙
        {
            x1 = ((-b) + sqrt(d)) / (2 * a);
            x2 = ((-b) - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
        if (d == 0) // Óńëîâčĺ äë˙ äčńęđčěčíŕíňŕ đŕâíîăî íóëţ
        {
            x1 = -(b / (2 * a));
            cout << "x1 = x2 = " << x1 << "\n";
        }
        if (d < 0) // Óńëîâčĺ ďđč äčńęđčěčíŕíňĺ ěĺíüřĺ íóë˙
            cout << "D < 0, Äĺéńňâčňĺëüíűő ęîđíĺé óđŕâíĺíč˙ íĺ ńóůĺńňâóĺň";
    }
    //system("pause");
}

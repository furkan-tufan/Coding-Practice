#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int a, b;
    cout << "a değerini giriniz:";
    cin >> a;
    cout << "b değerini giriniz:";
    cin >> b;
    a = (float)a;
    b = (float)b;
    float y2;
    y2 = a + (a / (b + static_cast<float>(1)));
    y2 /= pow(1 + ((pow(a + pow(b, 2), 1 / 3)) / (1 / sqrt(a * b))), 1 / 5);
    y2 += pow(a * b, 2);
    y2 -= 4 * a / (pow(pow(b,2), 1 / 3));
    cout << "İşlem sonucu : " << y2<<endl;
}
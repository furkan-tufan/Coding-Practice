#include <iostream>
using namespace std;

class dikdortgen
{
public:
    float en;
    float boy;
    float alan(float en, float boy)
    {
        return en * boy;
    }
    float cevre(float en, float boy);
};

float dikdortgen::cevre(float en, float boy)
{
    return (en + boy) * 2;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    dikdortgen x;
    x.en = 50;
    x.boy = 100;
    dikdortgen y;
    y.en = 150;
    y.boy = 200;
    cout << "x şeklinin alanı: " << x.alan(x.en, x.boy) << endl << "x şeklinin çevresi: " << x.cevre(x.en, x.boy) << endl;
    cout << "y şeklinin alanı: " << y.alan(y.en, y.boy) << endl << "y şeklinin çevresi: " << y.cevre(y.en, y.boy) << endl;
}
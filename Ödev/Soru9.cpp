#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cout << "N degerini giriniz: ";
    cin >> N;
    N = (float)N;
    float toplam = 0;
    for (int i = 1; i <= N; i++) {
        toplam += (pow(i, 2) + 5) / 3;
    }
    cout << "Islem Sonucu: " << toplam;
}
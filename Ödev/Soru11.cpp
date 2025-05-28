#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(0));
	int tahmin[6];
	int loto[6];
	for (int i = 0; i < 6; i++)
	{
		cout << "Lotunun " << i + 1 << "'inci sayısını tahmin ediniz.(1-90 arası)";
		cin >> tahmin[i];
	}

	cout << "LOTO SONUÇLARI:\n";
	for (int i = 0; i < 6; i++)
	{
		loto[i] = rand() % 90 + 1;
		cout << loto[i] << "\n";
	}

	for (int i = 0; i < 6; i++)
	{
		if (tahmin[i] != loto[i]) { //eşit değilse kazanamadınız yazıp döngüden çıkıyor.
			cout << "Kazanamadınız...";
			break;
		}
		else if (i == 5) { //tüm sayıları karşılaştırmasına rağmen hepsi eşitse döngüden çıkmamıştır ve kazanılmıştır.
			cout << "Kazandınız!!!";
		}
	}
}
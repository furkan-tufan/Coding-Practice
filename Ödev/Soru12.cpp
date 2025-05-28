#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int tahmin, sayi;
	int deneme = 0;
	srand(time(0));
	sayi = rand() % 1000 + 1;
	cout << "1 ile 1000 arasında bir sayı tuttum, tahmininiz nedir: ";
	for (;;) {
		cin >> tahmin;
		deneme++;
		if (tahmin < 1 || tahmin>1000) {
			cout << "tahmininiz 1 ile 1000 arasında olmalıdır. yeniden deneyiniz: ";
		}
		else if (tahmin == sayi) { //tahmin doğruysa sonsuz döngüden çıkıyoruz.
			cout << deneme << " DENEMEDE BİLDİNİZ!";
			break;
		}
		else if (tahmin < sayi) {
			cout << "YUKARI \n";
		}
		else if (tahmin > sayi) {
			cout << "AŞAĞI \n";
		}
	}
}
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");

	//1DEN 100E KADAR TEK SAYI YAZDIRMAK

	for (int x = 1; x <= 99; x += 2)
	{
		cout << x << endl;

		/*UFUK AÇMA
		a=1
		while (a<100)
		if(a%2=1){
		cout << a << ","; }
		a++*/
	}

	//50 İLE 70 ARASINDAKİ ÇİFT SAYILARI YAZDIRMAK

	int a = 50;
	while (a <= 70)
	{
		cout << a << endl;
		a += 2;
	}

	//100DEN 70E KADAR 7YE BÖLÜNEBİLEN SAYILAR

	int y = 98;
	do
	{
		cout << y << endl;
		y -= 7;
	} while (y >= 70);

	//1-100 ARASINDA 3 VE 7YE BÖLÜNEBİLEN SAYILAR

	for (int z = 21; z <= 84; z += 21)
		cout << z << endl;

	//iç içe if'ler && bağlacıyla ayrılabilir

	//1-100 ARASINDA 3 VEYA 7YE BÖLÜNEBİLEN SAYILAR
	int v = 1;
	while (v < 100)
	{
		if (v % 3 == 0 || v % 7 == 0)
			cout << v << " ";
		v++;
	}
}

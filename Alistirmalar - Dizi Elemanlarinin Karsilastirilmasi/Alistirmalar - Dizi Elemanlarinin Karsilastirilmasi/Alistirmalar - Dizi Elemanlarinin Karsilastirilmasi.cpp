#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayilar[5];
	int toplam = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Üzerinde çalışmak istediğiniz " << i + 1 << "'inci sayıyı giriniz: ";
		cin >> sayilar[i];
		toplam += sayilar[i];
	}

	int enbuyuk = sayilar[0];
	int enkucuk = sayilar[0];
	for (int i = 1; i < 5; i++)
	{
		if (sayilar[i] > enbuyuk)
			enbuyuk = sayilar[i];
		if (sayilar[i] < enkucuk)
			enkucuk = sayilar[i];
	}

	cout << endl << "Girdiğiniz sayıların toplamı: " << toplam << endl;
	cout << "Girdiğiniz sayıların ortalaması: " << (float)toplam / 5 << endl;
	cout << "Girdiğiniz sayıların en büyüğü: " << enbuyuk << endl;
	cout << "Girdiğiniz sayıların en küçüğü: " << enkucuk << endl;

}
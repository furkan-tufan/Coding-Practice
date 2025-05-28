#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[100];
	int eleman;
	cout << "Kaç elemanlı bir dizi istiyorsunuz: ";
	cin >> eleman;

	int gecici;
	int enbuyuk = 0;
	int enbuyuk2 = 0;
	int enbuyuk3 = 0;
	for (int i = 0; i < eleman; i++)
	{
		cout << "Dizi elemanını giriniz: ";
		cin >> gecici;
		dizi[i] = gecici;
		if (dizi[i] >= enbuyuk)
		{
			enbuyuk3 = enbuyuk2;
			enbuyuk2 = enbuyuk;
			enbuyuk = dizi[i];
		}
		else if (dizi[i] >= enbuyuk2)
		{
			enbuyuk3 = enbuyuk2;
			enbuyuk2 = dizi[i];
		}
		else if (dizi[i] >= enbuyuk3)
		{
			enbuyuk3 = dizi[i];
		}
	
	}
	cout << "En büyük eleman: "<< enbuyuk << endl;
	cout << "En büyük ikinci eleman: " << enbuyuk2 << endl;
	cout << "En büyük üçüncü eleman: " << enbuyuk3 << endl;
	cout << "En büyük üç elemanın toplamı: " << (enbuyuk + enbuyuk2 + enbuyuk3);
	
}
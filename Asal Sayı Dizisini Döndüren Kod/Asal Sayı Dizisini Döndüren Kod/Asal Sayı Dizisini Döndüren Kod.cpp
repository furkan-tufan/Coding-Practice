#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

bool asalKontrol(int a)
{
	if (a == 1)
		return false;
	else if (a == 2)
		return true;
	else
	{
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
				return false;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	int istenenEleman;
	cout << "Asal Sayı dizisinin kaçıncı elemanını görmek istiyorsunuz: ";
	cin >> istenenEleman;
	int elemanNumarasi = 0;
	for (int a = 1; ; a++)
	{
		if (asalKontrol(a))
			elemanNumarasi += 1;
		if (istenenEleman == elemanNumarasi)
		{
			cout << "Asal sayı dizisinin istediğiniz elemanı: " << a << "'dır";
			break;
		}
	}
}
#include <iostream>
#include <iomanip>
using namespace std;

bool asalKontrol(int a)
{
	if (a == 1)
		return 0;
	else if (a == 2)
		return 1;
	else
	{
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
				return 0;
		}
	}
	return 1;
}

int main()
{	setlocale(LC_ALL, "Turkish");

	int elemanSayisi;
	cout << "Asal sayıların kaç elemanını görmek istiyorsunuz: ";
	cin >> elemanSayisi;
	int toplam=0;

	for (int i = 1; toplam != elemanSayisi; i++)
	{
		if (asalKontrol(i))
		{
			cout << i << "\t";
			toplam += 1;
		}
	}

	//İSTİSNALARI VARDIR.
	/*
	for (int a = 1;; a++)
	{
		if (a == 1)
		{ }
		else if (a == 2 || a == 3 || a % 6 == 1 || a % 6 == 5)
		{
			cout << a << "\t";
			toplam += 1;
		}
		
		if (toplam == elemanSayisi)
			break;
	}
	*/
}
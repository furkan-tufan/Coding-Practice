#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

//Mersenne Dizisi= (2 üzeri n)-1 olan sayılardan oluşan dizi.

int mersenne(int x)
{
	int ilkAdim = pow(2, x);
	return ilkAdim - 1;
}

bool asalKontrol(int a)
{
	if (a == 1)
		return 0;
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
{
	setlocale(LC_ALL, "Turkish");

	int elemanSiniri;
	cout << "Kaç elemanlı asal mersenne dizisi istiyorsunuz? :";
	cin >> elemanSiniri;
   
	int elemanNumber = 1;
	for (int a = 1; elemanNumber <= elemanSiniri; a++)
	{

		if (asalKontrol(pow(2, a) - 1))
		{
			cout << pow(2, a) - 1 << "\t";
			elemanNumber += 1;
		}
	}
}
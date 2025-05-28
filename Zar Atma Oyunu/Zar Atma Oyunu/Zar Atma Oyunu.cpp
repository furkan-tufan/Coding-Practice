#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	for (;;)
	{
		srand(time(0));

		int zarSayisi;
		cout << "Kaç zar atmak istiyorsunuz?  :  ";
		cin >> zarSayisi;
		cout << endl;

		int p1[100];
		int p2[100];
		int p1Point = 0;
		int p2Point = 0;

		for (int i = 0; i < zarSayisi; i++)
		{

			p1[i] = rand() % 6 + 1;
			p2[i] = rand() % 6 + 1;
			cout << "Birinci oyuncunun zarı: " << p1[i] << endl;
			cout << "İkinci oyuncunun zarı: " << p2[i] << endl;
			if (p1[i] == p2[i])
			{
			}
			else if (p1[i] > p2[i])
				p1Point++;
			else
				p2Point++;
			cout << endl << endl;
		}
		if (p1Point > p2Point)
			cout << "Birinci oyuncu kazandı" << endl;
		if (p2Point > p1Point)
			cout << "İkinci oyuncu kazandı." << endl;
		if (p1Point == p2Point)
			cout << "Oyuncular berabere kaldı." << endl;

	}
}
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int satir;
	cout << "Kaçıncı satır?: ";
	cin >> satir;
	cout << endl;

	/*int blabla = satir;
	for (int i = 0; i <= satir; i++)
	{
		for(int j=0;j<satir-i;)	

	}*/


	for (int elemanNumarasi = 0; elemanNumarasi <= satir; elemanNumarasi++)
	{
		int geciciN = satir;
		int permutasyonKismi = 1, rFaktoriyel = 1;
		for (int j = 1; j <= elemanNumarasi; j++)
		{
			permutasyonKismi *= geciciN;
			geciciN--;
		}
		for (int k = 1; k <= elemanNumarasi; k++)
		{
			rFaktoriyel *= k;
		}
		cout << float(permutasyonKismi / rFaktoriyel) << "    ";
	}
}
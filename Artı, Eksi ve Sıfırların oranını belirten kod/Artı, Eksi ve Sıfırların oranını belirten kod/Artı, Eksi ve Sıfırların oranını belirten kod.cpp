#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi;
	cout << "Kaç sayı gireceğinizi yazınız" << endl;
	cin >> sayi;
	int arti = 0, eksi = 0, sifir = 0;
	for (int a = 1; a <= sayi; a++)
	{
		int giris;
		cout << "Gireceğiniz sayıyı yazınız" << endl;
		cin >> giris;
		if (giris < 0) eksi++;
		if (giris > 0) arti++;
		if (giris == 0) sifir++;
	}

	cout << "Pozitif sayı sayısı: " << (float)arti/sayi << endl;
	cout << "Negatif sayı sayısı : " << (float)eksi/sayi << endl;
	cout << "Sıfır sayısı: " << (float)sifir/sayi << endl;

}







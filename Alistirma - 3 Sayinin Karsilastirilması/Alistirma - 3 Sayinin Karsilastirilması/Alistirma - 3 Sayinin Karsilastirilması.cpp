#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	//int a, b, c;
	//cout << "a, b ve c degerlerini sirayla giriniz." << endl;
	//cin >> a >> b >> c;

	//int enbuyuk, enkucuk, a;
	//enbuyuk = a;
	//enkucuk = a;
	//if (b > enbuyuk)
	//	enbuyuk = b;
	//if (c > enbuyuk)
	//	enbuyuk = c;
	//if (b < enkucuk)
	//	enkucuk = b;
	//if (c < enkucuk)
	//	enkucuk = c;
	//cout << "En kucuk sayi:" << enkucuk << endl;
	//cout << "En buyuk sayi:" << enbuyuk << endl;

	int sayi1, sayi2, sayi3;
	for (;;)
	{
		cout << "Karşılaştırmak istediğiniz üç sayıyı giriniz: ";
		cin >> sayi1 >> sayi2 >> sayi3;

		if (sayi1 == sayi2 && sayi1 == sayi3)
		{
			cout << "Üç sayı da eşittir";
		}

		else if (sayi1 > sayi2 && sayi1 > sayi3)
		{
			if (sayi2 > sayi3)
			{
				cout << "En büyük sayı 1. sayıdır, en küçük sayı 3.sayıdır." << endl;
			}
			else if (sayi2 == sayi3)
			{
				cout << "En büyük sayı 1. sayıdır, en küçük sayılar 2. ve 3.sayıdır." << endl;
			}
			else
				cout << "En büyük sayı 1. sayıdır, en küçük sayı 2.sayıdır" << endl;

		}

		else if (sayi2 > sayi1 && sayi2 > sayi3)
		{
			if (sayi1 > sayi3)
			{
				cout << "En büyük sayı 2. sayıdır, en küçük sayı 3.sayıdır." << endl;
			}
			else if (sayi1 == sayi3)
			{
				cout << "En büyük sayı 2. sayıdır, en küçük sayılar 1. ve 3.sayıdır." << endl;
			}
			else
				cout << "En büyük sayı 2. sayıdır, en küçük sayı 1.sayıdır" << endl;
		}

		else if (sayi3 > sayi1 && sayi3 > sayi2)
		{
			if (sayi1 > sayi2)
			{
				cout << "En büyük sayı 3. sayıdır, en küçük sayı 2.sayıdır." << endl;
			}
			else if (sayi1 == sayi2)
			{
				cout << "En büyük sayı 3. sayıdır, en küçük sayılar 1. ve 2.sayıdır." << endl;
			}
			else
				cout << "En büyük sayı 3. sayıdır, en küçük sayı 1.sayıdır" << endl;
		}

		else if (sayi3 == sayi1 && sayi3 > sayi2)
			cout << "En büyük sayılar 1. ve 3.sayılardır, en küçük sayı 2.sayıdır." << endl;

		else if (sayi2 == sayi1 && sayi2 > sayi3)
			cout << "En büyük sayılar 1. ve 2.sayılardır, en küçük sayı 3.sayıdır." << endl;

		else
			cout << "En büyük sayılar 2. ve 3.sayılardır, en küçük sayı 1.sayıdır." << endl;
	}
}

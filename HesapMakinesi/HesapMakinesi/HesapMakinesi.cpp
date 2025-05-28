#include <iostream>
	using namespace std;
	int sayi1, sayi2, islemSayisi;
	
	void toplama();
	void cikarma();
	void carpma();
	void bolme();
	void mod();
	void faktoriyel();
	void permutasyon();
	void kombinasyon();
	void us();
	void kok();
	void islem();

	int main()
	{
		setlocale(LC_ALL, "Turkish");
		for(;;)
			islem();
	}

	void islem()
	{
		int islem;
		cout << "1)Toplama" << endl;
		cout << "2)Cikarma" << endl;
		cout << "3)Carpma" << endl;
		cout << "4)Bolme" << endl;
		cout << "5)Mod Alma" << endl;
		cout << "6)Faktöriyel" << endl;
		cout << "7)Permütasyon" << endl;
		cout << "8)Kombinasyon" << endl;
		cout << "9)Üs Alma" << endl;
		cout << "10)Kök Alma" << endl;
		cout << "Islemi seciniz: ";
		cin >> islem;

		switch (islem)
		{
		case 1: toplama();
			break;
		case 2: cikarma();
			break;
		case 3:carpma();
			break;
		case 4:bolme();
			break;
		case 5:mod();
			break;
		case 6:faktoriyel();
			break;
		case 7:permutasyon();
			break;
		case 8:kombinasyon();
			break;
		case 9:us();
			break;
		case 10:kok();
			break;
		default:
			cout << "Hatalı seçim yaptınız!" << endl;
			break;
		}
	}

	void toplama()
	{
		cout << "Sayıları giriniz: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç= " << sayi1 + sayi2 << endl << endl;
		islem();
	}

	void cikarma()
	{
		cout << "Sayıları giriniz: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç= " << sayi1 - sayi2 << endl << endl;
		islem();
	}

	void carpma()
	{
		cout << "Sayıları giriniz: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç= " << sayi1 * sayi2 << endl << endl;
		islem();
	}

	void bolme()
	{
		cout << "Sayıları giriniz: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç= " << sayi1 / sayi2 << endl << endl;
		islem();
	}

	void mod()
	{
		cout << "Sayıları giriniz: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç= " << sayi1 % sayi2 << endl << endl;
		islem();
	}

	void faktoriyel()
	{
		cout << "Faktöriyelini almak istediğiniz sayıyı giriniz: ";
		cin >> sayi1;
		int hafiza = sayi1;
		int toplam = 1;
		for (; sayi1 > 0; sayi1--)
			toplam = toplam * sayi1;
		cout << endl << "Faktöriyel(" << hafiza << ")" << toplam << endl << endl;
		islem();
	}

	void permutasyon()
	{
		cout << "Permütasyon(x,y) ikilisini giriniz: ";
		cin >> sayi1 >> sayi2;
		int hafiza1 = sayi1;
		int hafiza2 = sayi2;
		islemSayisi = sayi1 - sayi2;
		int ilkIslem = 1;
		for (; sayi1 > 0; sayi1--)
			ilkIslem = ilkIslem * sayi1;
		int ikinciIslem = 1;
		for (; islemSayisi > 0; islemSayisi--)
			ikinciIslem = ikinciIslem * islemSayisi;
		cout << endl << "Permütasyon(" << hafiza1 << "," << hafiza2 << ")= " << ilkIslem / ikinciIslem << endl << endl;
		islem();
	}

	void kombinasyon()
	{
		cout << "Kombinasyon(x,y) ikilisini giriniz: ";
		cin >> sayi1 >> sayi2;
		int hafiza1 = sayi1;
		int hafiza2 = sayi2;
		islemSayisi = sayi1 - sayi2;
		int ilkIslem = 1;
		for (; sayi1 > 0; sayi1--)
			ilkIslem = ilkIslem * sayi1;
		int ikinciIslem = 1;
		for (; sayi2 > 0; sayi2--)
			ikinciIslem = ikinciIslem * sayi2;
		int ucuncuIslem = 1;
		for (; islemSayisi > 0; islemSayisi--)
			ucuncuIslem = ucuncuIslem * islemSayisi;
		cout << endl << "Kombinasyon(" << hafiza1 << "," << hafiza2 << ")= " << ilkIslem / (ikinciIslem * ucuncuIslem) << endl << endl;
		islem();
	}

	void us()
	{
		cout << "Hangi sayının kaçıncı üssünü almak istiyorsunuz?: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç: " << pow(sayi1, sayi2) << endl << endl;
		islem();
	}

	void kok()
	{
		cout << "Hangi sayının kaçıncı kökünü almak istiyorsunuz?: ";
		cin >> sayi1 >> sayi2;
		cout << endl << "Sonuç: " << pow(sayi1, (float)1 / sayi2) << endl << endl;
		islem();
	}

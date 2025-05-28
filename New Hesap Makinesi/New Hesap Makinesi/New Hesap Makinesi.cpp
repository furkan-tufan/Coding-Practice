#include <iostream>
#include <math.h>
using namespace std;

void toplama();
void cikartma();
void carpma();
void bolme();
void mod();
void faktoriyel();
void us();
void kok();
void hipotenus();
void aritmetik();
void geometrik();
void permutasyon();
void kombinasyon();

int main()
{
	setlocale(LC_ALL, "Turkish");

	for (;;)
	{
		int islem;

		cout << "1)Toplama" << endl << "2)Çıkartma" << endl << "3)Çarpma" << endl << "4)Bölme" << endl << "5)Mod Alma"
			<< endl << "6)Faktöriyel" << endl << "7)Permütasyon" << endl << "8)Kombinasyon" << endl << "9)Üs Alma"
			<< endl << "10)Kök Alma" << endl << "11)Aritmetik Ortalama"
			<< endl << "12)Geometrik Ortalama" << endl << "13)Hipotenüs Hesaplama" << endl;
		cout << "Yapmak istediğiniz işlemi seçiniz: ";

		cin >> islem;

		switch (islem)
		{
		case 1:
			toplama();
			break;
		case 2:
			cikartma();
			break;
		case 3:
			carpma();
			break;
		case 4:
			bolme();
			break;
		case 5:
			mod();
			break;
		case 6:
			faktoriyel();
			break;
		case 7:
			permutasyon();
			break;
		case 8:
			kombinasyon();
			break;
		case 9:
			us();
			break;
		case 10:
			kok();
			break;
		case 11:
			aritmetik();
			break;
		case 12:
			geometrik();
			break;
		case 13:
			hipotenus();
			break;
		default:
			cout << "Hatalı giriş yaptınız. Yeniden deneyiniz.";
			break;
		}
	}
}

void toplama()
{
	cout << "Toplamak istediğiniz sayıları giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi;
	cin >> ikinciSayi;
	cout << "Sonuç: " << ilkSayi + ikinciSayi << endl << endl;
}

void cikartma()
{
	cout << "Çıkarmak istediğiniz sayıları giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi;
	cin >> ikinciSayi;
	cout << "Sonuç: " << ilkSayi - ikinciSayi << endl << endl;
}

void carpma()
{
	cout << "Çarpmak istediğiniz sayıları giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi;
	cin >> ikinciSayi;
	cout << "Sonuç: " << ilkSayi * ikinciSayi << endl << endl;
}

void bolme()
{
	cout << "Bölmek istediğiniz sayıları giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi;
	cin >> ikinciSayi;
	cout << "Sonuç: " << ilkSayi / ikinciSayi << endl << endl;
}

void mod()
{
	cout << "Modunu alacağınız sayıları giriniz: ";
	int ilkSayi, ikinciSayi;
	cin >> ilkSayi >> ikinciSayi;
	cout << "Sonuç: " << ilkSayi % ikinciSayi << endl << endl;
}

void faktoriyel()
{
	cout << "Faktöriyelini alacağınız sayıyı giriniz: ";
	int sayi;
	cin >> sayi;

	for (;;)
	{
		if (sayi >= 0)
			break;

		else if (sayi < 0)
		{
			cout << "Bir doğal sayı girmelisiniz. Yeniden giriniz: ";
			cin >> sayi;
		}
	}

	int sonuc = 1;

	for (int a = sayi; a != 0; a--)
		sonuc *= a;

	cout << "Faktöriyel(" << sayi << ")= " << sonuc << endl << endl;
}

void permutasyon()
{
	int n, r, sonuc = 1;
	cout << "P(n,r) olmak üzere n ve r'yi sırayla yazınız: ";
	cin >> n >> r;
	int geciciN = n;
	for (int i = 1; i <= r; i++)
	{
		sonuc *= geciciN;
		geciciN--;
	}
	cout << "P(" << n << "," << r << "): " << sonuc << endl << endl;
}

void kombinasyon()
{
	int n, r, permutasyonKismi = 1, rFaktoriyel = 1;
	cout << "C(n,r) olmak üzere n ve r'yi sırayla yazınız: ";
	cin >> n >> r;

	int pay = 1, payda = 1;
	for (int i = 0; i < r; i++)
	{
		pay *= (n - i);
		payda *= (r - i);
	}
	cout << "C(" << n << "," << r << "): " << pay / payda << endl << endl;

}

void us()
{
	cout << "Sayıyı ve almak istediğiniz üssünü giriniz: ";
	int ilkSayi, ikinciSayi;
	cin >> ilkSayi >> ikinciSayi;
	cout << "Sonuç: " << pow(ilkSayi, ikinciSayi) << endl << endl;
}

void kok()
{
	cout << "Sayıyı ve kökün derecesini giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi >> ikinciSayi;
	cout << "Sonuç: " << pow(ilkSayi, float(1 / ikinciSayi)) << endl << endl;
}

void aritmetik()
{
	float elemanSayisi, toplam = 0, gecici;
	cout << "Kaç elemanın aritmetik ortalamasını alacaksınız: ";
	cin >> elemanSayisi;
	cout << "Ortalaması alınacak sayıları giriniz: ";
	for (int i = 0; i < elemanSayisi; i++)
	{
		cin >> gecici;
		toplam += gecici;
	}
	cout << "A.O = " << toplam / elemanSayisi << endl << endl;

}

void geometrik()
{
	float elemanSayisi, carpim = 1, gecici;
	cout << "Kaç elemanın geometrik ortalamasını alacaksınız: ";
	cin >> elemanSayisi;
	cout << "Ortalaması alınacak sayıları giriniz: ";
	for (int i = 0; i < elemanSayisi; i++)
	{
		cin >> gecici;
		carpim *= gecici;
	}
	cout << "G.O = " << pow(carpim, 1 / elemanSayisi) << endl << endl;

}

void hipotenus()
{
	cout << "Üçgenin dik kenarlarını cm cinsinden giriniz: ";
	float ilkSayi, ikinciSayi;
	cin >> ilkSayi >> ikinciSayi;
	cout << "Sonuç: " << sqrt(pow(ilkSayi, 2) + pow(ikinciSayi, 2)) << endl << endl;
}
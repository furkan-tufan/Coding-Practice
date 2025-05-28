#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


//STRUCT, toplu değişken atamadır. sonuna noktalı virgül konur.
struct ekip
{
	char ad[100];
	char soyAd[100];
	int maas;
	int haftalikSaati;
};


ekip veriler()

{
	ekip x;
	cout << endl<< "Adınızı giriniz.\n";
	cin >> x.ad;
	cout << "Soyadınızı giriniz\n";
	cin >> x.soyAd;
	cout << "Maaşınızı giriniz.";
	cin >> x.maas;
	cout << "Haftalık kaç saat çalıştığınızı giriniz";
	return x;

}

int main()
{
	setlocale(LC_ALL, "Turkish");

	ekip furkan = { "Furkan", "Tufan", 5000,40 };
	cout << "İsmi: " << furkan.ad << endl << "Soyİsmi: " << furkan.soyAd << endl << "Maaşı: " << furkan.maas;
	ekip elif = veriler();
	cout << elif.ad << setw(2) << elif.soyAd << setw(2) << elif.maas;

	//setprecision ve fixed kaç basamaklı sayıların gözükeceğini bildirir
	float pi = 3.148457346;
	cout << setprecision(5) << endl;
	cout << fixed << setprecision(5) << endl;

	//typedef "int,float" gibi veri tiplerinin adını değiştirmeyi sağlar.
	typedef int tamsayi;
	tamsayi a = 10;

		
	/*  iç içe struct:
	struct sure {                   // yapı tanimlama
		int saat;
		int dakika;
	};

	struct takvim {               // yapi tanimlama
		int yil;
		int ay;
		int gun;
		struct sure tarih;            // icice yapi kullanimi
	};

	int main()
	{
		// Sonuç ekranında Türkçe karakterleri kullanabilmek için
		setlocale(LC_ALL, "Turkish");

		takvim t;

		cout << "yıl ay gün saat dakika";
		cin >> t.yil >> t.ay >> t.gun;
		cin >> t.tarih.saat >> t.tarih.dakika;

		cout << t.gun << t.ay << t.yil << '\t'
			<< t.tarih.saat << ':' << t.tarih.dakika; */

#include <iostream>
#include <iomanip>
#include <Windows.h>
	using namespace std;


	//STRUCT, toplu değişken atamadır. sonuna noktalı virgül konur.
	struct ekip
	{
		char ad[100];
		char soyAd[100];
		int maas;
		int haftalikSaati;
	};


	ekip veriler()

	{
		ekip x;
		cout << "Adınızı giriniz: ";
		cin >> x.ad;
		cout << endl;
		cout << "Soyadınızı giriniz: ";
		cin >> x.soyAd;
		cout << endl;
		cout << "Maaşınızı giriniz: ";
		cin >> x.maas;
		cout << endl;
		cout << "Haftalık kaç saat çalıştığınızı giriniz: ";
		cin >> x.haftalikSaati;
		cout << endl;
		return x;
	}


	int main()
	{
		setlocale(LC_ALL, "Turkish");

		ekip furkan = { "Furkan", "Tufan", 5000, 40 };

		ekip elif = veriler();
		cout << endl;
		cout << "Veri(ELİF): " << elif.ad << "  " << elif.soyAd << " && " << elif.maas << "TL && " << elif.haftalikSaati << "saat.......";

		//  "elif==furkan" MÜMKÜN DEĞİL
		//struct'ın içinde tanımlanan yükseklik "d.yukseklik" int main'deki "d. yukseklik" aynı şey tanımlanabilir.

	}
}
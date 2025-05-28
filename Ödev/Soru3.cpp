#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int secim;
	float miktar;
	cout << "1)Döviz Alacağım" << endl;
	cout << "2)Döviz Satacağım" << endl;
	cout << "1 ya da 2 yazarak seçiniz: ";
	cin >> secim;
	if (secim == 1) {
		cout << "1)Euro" << endl;
		cout << "2)Dolar" << endl;
		cout << "3)Sterlin" << endl;
		cout << "4)İsviçre Frankı" << endl;
		cout << "1 ile 4 arasında rakamlarla seçim yapınız: ";
		cin >> secim;
		cout << "Almak istediğiniz miktarı yazınız: ";
		cin >> miktar;
		switch (secim){
		case 1:
			if (miktar < 1000 && miktar>0)
				cout<< "Kur:" << "3.85\nÖdeyeceğiniz tutar:" << miktar * 3.85;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.89\nÖdeyeceğiniz tutar:" << miktar * 3.89;
			else if (miktar > 5000) 
				cout << "Kur:" << "3.90\nÖdeyeceğiniz tutar:" << miktar * 3.90;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 2:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "3.54\nÖdeyeceğiniz tutar:" << miktar * 3.54;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.57\nÖdeyeceğiniz tutar:" << miktar * 3.57;
			else if (miktar > 5000)
				cout << "Kur:" << "3.58\nÖdeyeceğiniz tutar:" << miktar * 3.58;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 3:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "4.50\nÖdeyeceğiniz tutar:" << miktar * 4.50;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "4.57\nÖdeyeceğiniz tutar:" << miktar * 4.57;
			else if (miktar > 5000)
				cout << "Kur:" << "4.60\nÖdeyeceğiniz tutar:" << miktar * 4.60;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 4:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "3.55\nÖdeyeceğiniz tutar:" << miktar * 3.55;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.61\nÖdeyeceğiniz tutar:" << miktar * 3.61;
			else if (miktar > 5000)
				cout << "Kur:" << "3.67\nÖdeyeceğiniz tutar:" << miktar * 3.67;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
		default:
			cout << "Kur seçiminiz yanlış" << endl;
		}
	}
	if (secim == 2) {
		cout << "1)Euro" << endl;
		cout << "2)Dolar" << endl;
		cout << "3)Sterlin" << endl;
		cout << "4)İsviçre Frankı" << endl;
		cout << "1 ile 4 arasında rakamlarla seçim yapınız: ";
		cin >> secim;
		cout << "Almak istediğiniz miktarı yazınız: ";
		cin >> miktar;
		switch (secim) {
		case 1:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "3.98\nAlacağınız tutar:" << miktar * 3.98;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.94\nAlacağınız tutar:" << miktar * 3.94;
			else if (miktar > 5000)
				cout << "Kur:" << "3.92\nAlacağınız tutar:" << miktar * 3.92;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 2:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "3.68\nAlacağınız tutar:" << miktar * 3.68;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.63\nAlacağınız tutar:" << miktar * 3.63;
			else if (miktar > 5000)
				cout << "Kur:" << "3.62\nAlacağınız tutar:" << miktar * 3.62;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 3:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "4.70\nAlacağınız tutar:" << miktar * 4.70;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "4.66\nAlacağınız tutar:" << miktar * 4.66;
			else if (miktar > 5000)
				cout << "Kur:" << "4.62\nAlacağınız tutar:" << miktar * 4.62;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
			break;
		case 4:
			if (miktar < 1000 && miktar>0)
				cout << "Kur:" << "3.75\nAlacağınız tutar:" << miktar * 3.75;
			else if (miktar > 1000 && miktar < 5000)
				cout << "Kur:" << "3.70\nAlacağınız tutar:" << miktar * 3.70;
			else if (miktar > 5000)
				cout << "Kur:" << "3.69\nAlacağınız tutar:" << miktar * 3.69;
			else
				cout << "miktar seçiminiz artı değer olmalıdır";
		default:
			cout << "Kur seçiminiz yanlış" << endl;
		}
	}
}


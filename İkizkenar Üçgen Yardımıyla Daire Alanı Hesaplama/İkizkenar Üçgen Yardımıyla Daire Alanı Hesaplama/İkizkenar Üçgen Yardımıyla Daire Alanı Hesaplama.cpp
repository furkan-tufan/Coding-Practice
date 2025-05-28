#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int yaricap;
	cout << "Dairenin yaricapini cm cinsinden giriniz: ";
	cin >> yaricap;

	float pi = 3.14;
	int ucgenSayisi = 10;  //ilk üçgen sayısının bir önemi yok, şimdilik 10 verdik.
	float maxHataPayi = 0.01;
	float bulunanAlan;
	float hataPayimiz;
	float gercekAlan = pi * pow(yaricap, 2);
	do {
		bulunanAlan = ucgenSayisi * sin(2 * pi / ucgenSayisi) * (pow(yaricap, 2) / 2);
		hataPayimiz = (gercekAlan - bulunanAlan) / gercekAlan * 100;
		ucgenSayisi++;
	} while (maxHataPayi < hataPayimiz);
	cout << "dairenin gercek alani: " << gercekAlan << endl;
	cout << "buldugumuz daire alan: " << bulunanAlan << endl;
	cout << "hata payimiz: " << hataPayimiz << endl;
}
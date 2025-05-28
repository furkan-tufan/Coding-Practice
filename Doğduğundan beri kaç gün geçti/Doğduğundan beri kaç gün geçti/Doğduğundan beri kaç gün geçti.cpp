#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
#include <time.h>
#include <fstream>
#include <sstream>
using namespace std;



int dogumTarihiHesapla(int yil, int ay, int gun);


int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int dogumYili, dogumAyi, dogumGunu;
	cout << "Doğduğunuz yılı sayı olarak giriniz: ";
	cin >> dogumYili;
	cout << "Doğduğunuz ayın numarasını olarak giriniz: ";
	cin >> dogumAyi;
	cout << "Ayın kaçında doğdunuzu giriniz: ";
	cin >> dogumGunu;
	cout << "Şimdiye kadar " << dogumTarihiHesapla(dogumYili, dogumAyi, dogumGunu) << "gün yaşadınız";
}

int dogumTarihiHesapla(int yil, int ay, int gun)
{
	int simdiYil = 2020;
	int simdiAy = 3;
	int simdiGun = 1;
	int yilFarki, ayFarki, gunFarki;

	if (simdiAy > ay)
	{
		yilFarki = simdiYil - yil;
		if (simdiGun >= gun)
		{
			gunFarki = simdiGun - gun;
			ayFarki = simdiAy - ay;
		}
		else if (simdiGun < gun)
		{
			gunFarki = (30 - gun) + simdiGun;
			ayFarki = simdiAy - ay - 1;
		}
	}

	if (simdiAy < ay)
	{
		yilFarki = simdiYil - yil - 1;
		
		if (simdiGun >= gun)
		{
			gunFarki = simdiGun - gun;
			ayFarki = (12 - ay) + simdiAy;
		}
		else if (simdiGun < gun)
		{
			gunFarki = (30 - gun) + simdiGun;
			ayFarki = (12 - ay) + simdiAy -1;
		}
	}
	if (simdiAy == ay) 
	{
		if (simdiGun >= gun) 
		{
			yilFarki = simdiYil - yil;
			ayFarki = 0;
			gunFarki = simdiGun - gun;
		}
		else if (simdiGun < gun)
		{
			yilFarki = simdiYil - yil - 1;
			ayFarki = 11;
			gunFarki = (30 - gun) + simdiGun;
		}
	}
	return (yilFarki * 365) + (ayFarki * 30) + gunFarki;
}
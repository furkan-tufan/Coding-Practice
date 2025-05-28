#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
#include <time.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int boyut;
	cout << "Eşkenar dörtgeninizin köşegen boyutunu giriniz: ";
	cin >> boyut;
	for (;;)
	{
		if (boyut % 2 == 0)
		{
			cout << endl << "Köşegen uzunluğu tek sayı olmalıdır. Yeniden giriniz: ";
			cin >> boyut;
		}
		if (boyut % 2 == 1)
			break;
	}

	for (int i = 1; i <= (boyut-1) / 2; i++)
	{
		for (int ilkBosluk = 1; ilkBosluk <= (boyut - 1) / 2 - i + 1; ilkBosluk++)
			cout << " ";
		for (int yildiz = 1; yildiz < (2 * i); yildiz++)
			cout << "*";
		cout << endl;
	}

	for (int i = 1; i <= boyut; i++)
	{
		cout << "*";
	}

	cout << endl;

	for (int i = 1; i <= (boyut - 1) / 2; i++)
	{
		for (int ilkBosluk = 1; ilkBosluk <= i; ilkBosluk++)
			cout << " ";
		for (int yildiz = 1; yildiz <= boyut - (2 * i); yildiz++)
			cout << "*";
		cout << endl;
	}
              	
}
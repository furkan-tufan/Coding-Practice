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
	cout << "Kaç satırlık ikizkenar dik üçgen oluşturmak istediğinizi giriniz: ";
	cin >> boyut;

	// (SOLA DAYALI) İKİZKENAR DİK ÜÇGEN OLUŞTURMA

	for (int i = 1; i <= boyut; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	cout << " ";

	// (SAĞA DAYALI) İKİZKENAR DİK ÜÇGEN OLUŞTURMA

	for (int i = 1; i <= boyut; i++)
	{
		for (int bosluk = 1; bosluk <= boyut - i; bosluk++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";

		cout << endl;
	}
	cout << " ";

	// (SAĞA DAYALI) TERS İKİZKENAR DİK ÜÇGEN OLUŞTURMA

	for (int i = 1; i <= boyut; i++)
	{
		for (int bosluk = 1; bosluk < i; bosluk++)
			cout << " ";
		for (int j = 1; j <= boyut - i + 1; j++)
			cout << "*";
		cout << endl;
	}
	cout << " ";

	// (SOLA DAYALI) TERS İKİZKENAR DİK ÜÇGEN OLUŞTURMA
	for (int i = 1; i <= boyut; i++)
	{
		for (int j = 1; j <= boyut - i + 1; j++)
			cout << "*";
		cout << endl;
	}
}
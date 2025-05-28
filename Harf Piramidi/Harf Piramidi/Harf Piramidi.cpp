#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int satir;
	cout << "Kaç satırlık harf piramidi istediğinizi giriniz.";
	cin >> satir;

	int jilk = 65;
	int json;

	for (int i = 1; i <= satir; i++)
	{
		cout << setw(27 - i);

		for (int j = 65; j < jilk + i; j++)
		{
			cout << (char)j;
			Sleep(5);
			json = j - 1;
		}

		for (; json >= jilk; json--)
		{
			cout << (char)json;
			Sleep(5);
		}
		cout << endl;
		Sleep(100);
	}
}
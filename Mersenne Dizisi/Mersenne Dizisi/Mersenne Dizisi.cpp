#include <iostream>
using namespace std;

//FONKSİYONLU DİZİ GÖSTERİMİ

int mersenne(int x)
{
	return (pow(2, x) - 1);
}

int main()
{
	int elemanSayisi;
	cout << "Kaç elemanlı bir mersenne dizisi girmek istediğinizi giriniz";
	cin >> elemanSayisi;
	for (int a = 1; a <= elemanSayisi; a++)
		cout << mersenne(a) << "\t";	
}

//FONKSİYONSUZ DİZİ GÖSTERİMİ

int main()
{
	setlocale(LC_ALL, "Turkish");
	int elemanSayisi;
	cout << "Kaç elemanlı bir mersenne dizisi girmek istediğinizi giriniz";
	cin >> elemanSayisi;
	for (int i = 1; i <= elemanSayisi;i++)
		cout << pow(2, i) - 1 << "\t";
}
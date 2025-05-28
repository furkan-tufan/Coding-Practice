#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int faktoriyel(int x)
{
	int toplam = 1;
	for (; x > 0; x--)
	{
		toplam = toplam * x;
	}
	return toplam;
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	int toplam = 0;

	int x,y;
	cout << "X faktöriyel ile x'in toplamına x sayısı için 'Tufan işlemi' denir. Bu uygulamada Tufan işlemlerini seçilen sayılar arasında toplayabilirsiniz." << endl;
	cout << "Hangi basamaklar arasında Tufan işlemi toplaması yapmak istiyorsunuz.";
	cin >>x>>y;
	for (; x <= y; x++)
		toplam += faktoriyel(x) + x;


	cout << toplam << endl;



}
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	for (;;)
	{
		int elemanSayisi;
		cout << "Fibonacci serisinin kaç üyesini görmek istediğinizi yazınız." << endl;
		cin >> elemanSayisi;
		int eleman1 = 0;
		int eleman2 = 1;
		if (elemanSayisi == 1)  cout << "0" << endl; 
		else if (elemanSayisi==2) cout << "0" << endl << "1" << endl;
		else if (elemanSayisi<=0) {}
		else
		{
			cout << "0" << endl << "1" << endl;
			for (int a = 1; a <= elemanSayisi - 2; a++)
			{
				int eleman3 = eleman1 + eleman2;
				cout << eleman3 << endl;
				eleman1 = eleman2;
				eleman2 = eleman3;
			}
		}
	}








}

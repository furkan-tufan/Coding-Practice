#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish") ;

	//TERS KÖŞEGENİ 1, DİĞER ELEMANLARI 0 OLAN KARE MATRİS YAPIMI
	
	int boyut;
	cout << "Kare matrisinizin (iXj) mertebesini giriniz.";
	cin >> boyut;

	//:::::::::::::::::::::::BİRİNCİ YOL::::::::::::::::

	for (int satir = 1; satir<=boyut; satir++)
	{
		for (int a = 1; a <= boyut - satir; a++)
			cout << "0";

		cout << "1";

		for (int b = 1; b <= satir - 1; b++)
			cout << "0";

		cout<< endl; 
	}

	//::::::::::::::::::::::::İKİNCİ YOL::::::::::::::::::

	cout << "Ters diagonu 1 olan matris: " << endl;
	for (int i = 1; i <= boyut; i++)
	{
		for (int j = 1; j <= boyut; j++)
		{
			if (i + j == boyut + 1)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	
	//ALT ÜÇGENİ 1 OLAN TERS DİAGONLU MATRİSİ YAZDIRMA

	cout << "Alt üçgeni 1 olan ters diagonlu matris: " << endl;
	
	for (int i = 1; i <= boyut; i++)
	{
		for (int j = 1; j <= boyut; j++)
		{
			if (i+j>=boyut+1)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	
}
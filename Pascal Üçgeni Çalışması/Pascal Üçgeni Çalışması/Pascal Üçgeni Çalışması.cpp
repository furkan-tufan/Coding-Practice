#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

	int satirSayisi;
	cout << "Kaçıncı satırdaki elemanları görmek istediğinizi yazınız: ";
	cin >> satirSayisi;
	cout << endl;
	for (int i = 0; i <= satirSayisi; i++)
	{
		int pay = 1, payda = 1;
		for (int j = 0; j < i; j++)
		{
			pay *= (satirSayisi - j);
			payda *= i-j;
		}
		cout << pay / payda << " ";

	}
}

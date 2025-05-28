#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
	int N, temp;
	cout << "Kaç eleman girmek istiyorsunuz: ";
	cin >> N;
	int* sayiDizisi = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout<< i + 1 << "'inci sayıyı giriniz: ";
		cin >> sayiDizisi[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (sayiDizisi[i] > sayiDizisi[j])
			{
				temp = sayiDizisi[i];
				sayiDizisi[i] = sayiDizisi[j];
				sayiDizisi[j] = temp;
			}
		}
	}

	cout << "Sıralanmış Sayılar:" << endl;
	for (int i = 0; i < N; i++)
		cout << sayiDizisi[i] << "\t";

	delete[] sayiDizisi; //dinamik diziyi siliyoruz.
}

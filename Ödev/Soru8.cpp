#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish"); 
	int m, n;
	cout << "Kaç satırlı matris istiyorsunuz: ";
	cin >> m;
	cout << "Kaç sütunlu matris istiyorsunuz: ";
	cin >> n;

	int** A = new int* [m]; //dinamik dizi oluşturuyoruz
	for (int i = 0; i < m; i++) {
		A[i] = new int[n];
	}

	cout << "Matris elemanlarını tamsayı olarak giriniz: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];

	int** B = new int* [m]; //diğer dinamik diziyi oluşturuyoruz
	for (int i = 0; i < m; i++) {
		B[i] = new int[n];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] < 10)
				B[i][j] = -1;
			else if (A[i][j] > 20)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << B[i][j] << " ";
		cout << endl;
	}
	//dinamik dizileri heap bellek bölgesinden siliyoruz
	for (int i = 0; i < m; i++) {
		delete[] A[i];
	}
	delete[] A;
	for (int i = 0; i < m; i++) {
		delete[] B[i];
	}
	delete[] B;

}
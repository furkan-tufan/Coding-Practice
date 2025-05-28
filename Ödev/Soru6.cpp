#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int matris[3][3];
	int T1, T2;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matris[i][j] = rand() % 10;
		}
	}
	cout<<"Tersi, tranpozesi ve determinantı alınacak matris : \n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matris[i][j] << "    ";
		}
		cout << endl;
	}

	T1 = matris[0][0] * matris[1][1] * matris[2][2];
	T1 += matris[1][0] * matris[2][1] * matris[0][2];
	T1 += matris[2][0] * matris[0][1] * matris[1][2];
	T2 = matris[0][2] * matris[1][1] * matris[2][0];
	T2 += matris[1][2] * matris[2][1] * matris[0][0];
	T2 += matris[2][2] * matris[0][1] * matris[1][0];
	cout << endl << "Matrisin determinantı: " << T1 - T2 << endl;

	cout <<endl<<"Matrisin tersi: " << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << ((matris[(j + 1) % 3][(i + 1) % 3] * matris[(j + 2) % 3][(i + 2) % 3]) - (matris[(j + 1) % 3][(i + 2) % 3] * matris[(j + 2) % 3][(i + 1) % 3])) / ((float)T1 - T2) << "\t";
		cout << "\n";

	}
	int tersMatris[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			tersMatris[j][i] = matris[i][j];
		}
	}
	cout << "Matrisin transpozesi: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tersMatris[i][j] << "    ";
		}
		cout << endl;
	}

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

	cout << "Diğer matrisin elemanlarını tamsayı olarak giriniz: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> B[i][j];
	
	cout << "Oluşturduğunuz matrislerin toplamı: \n";
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			cout << A[i][j] + B[i][j] <<"   ";
		cout << endl;
	}
	cout << "Matrislerin farkı \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << A[i][j] - B[i][j] << "   ";
		cout << endl;
	}
	cout << "Matrislerin çarpımı \n";
	int gecici = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			gecici = 0;
			for (int k = 0; k < n; k++){
				gecici += A[i][k] * B[k][j];
			}
			cout << gecici << "   ";
		}
		cout << endl;
	}
}
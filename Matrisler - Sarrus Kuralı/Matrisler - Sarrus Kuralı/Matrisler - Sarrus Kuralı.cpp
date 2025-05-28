#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	srand(time(0));

	int matris[3][3];
	int T1, T2;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matris[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matris[i][j] << "     ";
		}
		cout << endl;
	}

	T1 = matris[0][0] * matris[1][1] * matris[2][2];
	T1 += matris[1][0] * matris[2][1] * matris[0][2];
	T1 += matris[2][0] * matris[0][1] * matris[1][2];

	T2 = matris[0][2] * matris[1][1] * matris[2][0];
	T2 += matris[1][2] * matris[2][1] * matris[0][0];
	T2 += matris[2][2] * matris[0][1] * matris[1][0];
	cout << endl << endl << "Matrisin determinantı: " << T1 - T2 << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if(i!=j){
				matris[i][j] = matris[j][i];
				matris[j][i] = matris[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << matris[i][j] << "\t";
			cout << endl;
		}
	}

}
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	/*
	int dizi1[3][3] = { { 5,6,9 },{1,12,4},{2,3,16} };
	int dizi2[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << dizi1[i][j] << "\t";
		cout << endl;
	}
	cout << "\n/////////////////////////////////////////" << endl<<endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dizi2[i][j] = dizi1[j][i];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << dizi2[i][j] << "\t";
		cout << endl;
	}
	*/
	int dizi1[3][3] = { { 5,6,9 },{1,12,4},{2,3,16} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << dizi1[i][j] << "\t";
		cout << endl;
	}
	cout << "\n/////////////////////////////////////////" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
			{
			}
			else
			{
				dizi1[i][j] = dizi1[j][i];
				dizi1[j][i] = dizi1[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << dizi1[i][j] << "\t";
		cout << endl;
	}
}
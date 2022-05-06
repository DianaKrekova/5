#include "Ex5.h"

double* giveMemoryToArr(double* Arr, int size)
{
	Arr = new double[size];
	return Arr;
}
void fillArr(double* Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = i + 1;
	}
}
void printArr(double* Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << "  ";
	}
	cout << endl;
}
double* freeMemory(double* Arr)
{
	delete[] Arr;
	Arr = 0;

	return Arr;
}

void swap(double* Arr, int size) {
	int i = 0;
	double k = 0;
	while (i != size) {
		k = Arr[i + 1];
		Arr[i + 1] = Arr[i];
		Arr[i] = k;
		i += 2;
	}
}

int** giveMemoryToArr2(int row, int col)
{
	int** Arr = new int* [row];
	for (int i = 0; i < row; i++) {
		Arr[i] = new int[col];
	}
	return Arr;
}

void freeMemory2(int** Arr, int row)
{
	for (int i = 0; i < row; i++)
		delete[] Arr[i];
	delete[] Arr;
}

void fillArr2(int** Arr, int row, int col)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			Arr[i][j] = 10 + rand() % (50 - 10 + 1);
		}
	}
}

void printArr2(int** Arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}
}
#include "Ex5.h"

int main()
{
	setlocale(0, "");

	double* ArrForFill = 0;
	char ans = 0;

	do
	{
		int size = 0;
		cout << "Size of array: ";
		cin >> size;

		ArrForFill = giveMemoryToArr(ArrForFill, size);
		fillArr(ArrForFill, size);
		if (size == 12) {
			swap(ArrForFill, size);
		}
		printArr(ArrForFill, size);
		ArrForFill = freeMemory(ArrForFill);

		cout << "\nContinue(1). Exit(0): ";
		cin >> ans;
	} while (ans != '0');

	return 0;
	//2 часть задания
	/*
	int row, col;
	cout << "Number of rows:";
	cin >> row;
	cout << "Number of columns:";
	cin >> col;
	int** ArrForFill = giveMemoryToArr2(row, col);
	fillArr2(ArrForFill, row, col);
	printArr2(ArrForFill, row, col);
	freeMemory2(ArrForFill, row);
	return 0;*/
}

#ifndef EX5_H
#define EX5_H
#include <iostream>
#include <ctime>
using namespace std;


using namespace std;

double* giveMemoryToArr(double* Arr, int size);
void freeMemory2(int** Arr, int row);
void printArr(double* Arr, int size);
void fillArr(double* Arr, int size);
double* freeMemory(double* Arr);
void printArr2(int** Arr, int row, int col);
int** giveMemoryToArr2(int row, int col);
void freeMemory2(int** Arr, int row);
void swap(double* Arr, int size);
void fillArr2(int** Arr, int row, int col);
void printArr2(int** Arr, int row, int col);
#endif 
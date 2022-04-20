#include "complex.h"


void sortInver(int* arr, unsigned size)
{
	int b = size;
	for (int i = 0; i < size; i++) {
		swap(arr[i], arr[b]);
		b--;
	}
}

void sortS(int* arr, unsigned size)
{
	int a = size, b = 0;
	for (int i = 0; i < size - 1; i++) {
		a = size; b = 0;
		for (int j = i; j < size; j++) {
			if (a > arr[j]) {
				a = arr[j]; b = j;
			}
		}

		swap(arr[i], arr[b]);

	}
}

void sortB(int* arr, unsigned size)
{
	int a = 0, b = 0;
	for (int i = 0; i < size - 1; i++) {
		a = 0; b = 0;
		for (int j = i; j < size; j++) {
			if (a < arr[j]) {
				a = arr[j]; b = j;
			}
		}

		swap(arr[i], arr[b]);

	}
}

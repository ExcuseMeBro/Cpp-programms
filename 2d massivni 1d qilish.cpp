#include <bits/stdc++.h>
#include <iostream>


void print1DArray(int *arr, int size) {

	for (int i = 0; i < size - 1; i++) {

		std::cout << arr[i] << ", ";
	}
	std::cout << arr[size - 1];
}

void print1DArray1(int *arr, int size) {
	std::cout << (arr[size - 1])<<", ";
	for (int i = 1; i < size - 1; i++) {
		
		std::cout << arr[i] << ", ";
	}
	std::cout << (arr[0]);
}

void print2DArray(int **arr, int size, int size2) {

	for (int i = 0; i < size - 1; i++) {

		print1DArray(arr[i], size2);
		std::cout << std::endl;
	}
	print1DArray(arr[size - 1], size2);
}

int main()
{
	int **array;
	array = new int*[4];

	array[0] = new int[4] { 1, 2, 3, 4 };
	array[1] = new int[4] { 5, 6, 7, 8 };
	array[2] = new int[4] { 9, 10, 11, 12 };
	array[3] = new int[4] { 13, 14, 15, 16 };

	int size = 4;
	int size2 = 4;

	std::cout << "MATRITSA: \n";
	print2DArray(array, size, size2);
	std::cout << std::endl << std::endl;

	int totalSize = size * size2;
	int* result = new int[totalSize];

	int idx = 0;
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size2; j++) {

			result[idx++] = array[i][j];
		}
	}

	std::cout << "MASSIV: \n";
	print1DArray(result, totalSize);

	std::cout << "\nNatija: \n";
	print1DArray1(result, totalSize);

	getchar();
	return 0;
}
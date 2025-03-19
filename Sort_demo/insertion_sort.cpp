#include <iostream>
#include <stdio.h>

using namespace std;

inline int* insertion_sort(int* array, int arr_size) {
	int swap_count = 0;
	for (int i = 1; i < arr_size; i++) {
		for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {
			swap(array[j - 1], array[j]);
			swap_count++;
		}
	}
	printf("Количество перестановок: %d\n", swap_count);
	return array;
}
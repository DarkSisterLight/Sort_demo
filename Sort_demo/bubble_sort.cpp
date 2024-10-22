#include <iostream>
#include <stdio.h>

#include "bubble_sort.h"

using namespace std;

int* bubble_sort(int* array, int arr_size) {
	int swap_count = 0;
	for (int i = 0; i < arr_size; i++) {
		for (int j = 0; j < arr_size; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				swap_count++;
			}
		}
	}
	printf("Количество перестановок: %d\n", swap_count);
	return array;
}

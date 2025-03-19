#include <iostream>
#include <stdio.h>

using namespace std;

inline int* selection_sort(int* array, int arr_size) {
	int min_elem, swap_count = 0;
	for (int i = 0; i < arr_size; i++) {
		min_elem = i;
		for (int j = i + 1; j < arr_size; j++) {
			if (array[j] < array[min_elem]) {
				min_elem = j;
			}

		}
		swap(array[i], array[min_elem]);
		swap_count++;
	}
	printf("Количество перестановок: %d\n", swap_count);
	return array;
}
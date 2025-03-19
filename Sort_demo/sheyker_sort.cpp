#include <iostream>
#include <stdio.h>

using namespace std;

inline int* sheyker_sort(int* array, int arr_size) {
	bool sort_or_not = true;
	int right = arr_size, left = 1, swap_count = 0;
	do {
		sort_or_not = true;
		for (int i = left; i < right; i++) {
			if (array[i - 1] > array[i]) {
				swap(array[i - 1], array[i]);
				sort_or_not = false;
				swap_count++;
			}
		}
		right--;
		for (int i = right; i >= left; i--) {
			if (array[i] < array[i - 1]) {
				swap(array[i], array[i - 1]);
				sort_or_not = false;
				swap_count++;
			}
		}
		left++;
	} while (sort_or_not == false);
	printf("Количество перестановок: %d\n", swap_count);
	return array;
}
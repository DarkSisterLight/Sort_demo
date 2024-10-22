#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>


int* random_array(int* array, int arr_size, int num) {
	srand(time(NULL));
	for (int i = 0; i < arr_size; i++) {
		array[i] = rand() % num;
	}
	return array;
}

void print_array(int* array, int arr_size) {
	printf("[");
	for (int i = 0; i < arr_size; i++) {
		printf("%d", array[i]);
		if (i < arr_size - 1) {
			printf(",");
		}
	}
	printf("]\n");
}
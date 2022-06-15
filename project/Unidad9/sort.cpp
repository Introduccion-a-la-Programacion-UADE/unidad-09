#include "sort.h"

void swap(int array[], int a, int b) {
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

void selectionSort(int m_array[], int m_numElements) {

	int temp;
	int min = 0;

	for (int k = 0; k < m_numElements - 1; k++)
	{
		min = k;

		for (int i = k + 1; i < m_numElements; i++) {

			if (m_array[i] < m_array[min]) {
				min = i;
			}
		}

		if (m_array[k] > m_array[min]) {
			swap(m_array, k, min);
		}
	}
}

void insertionSort(int array[], int size) {

	int temp;
	int i = 0;

	for (int k = 1; k < size; k++) {

		temp = array[k];
		i = k;

		while (i > 0 && array[i - 1] >= temp) {
			array[i] = array[i - 1];
			i--;
		}

		array[i] = temp;
	}
}


void bubbleSort(int array[], int size) {

	for (int i = 0; i < size - 1; i++) {

		for (int j = i + 1; j < size; j++) {

			if (array[i] > array[j]) {
				swap(array, i, j);
			}
		}
	}
}


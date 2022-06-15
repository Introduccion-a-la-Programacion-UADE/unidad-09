#include "search.h"


int linearSearch(int value, int array[], int size) {
	/*
	int index = -1;
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			index = i;
		}
	}
	return index;*/

	bool success = false;
	int index = size - 1;
	while (!success && index >= 0) {
		if (array[index] == value) {
			success = true;
		}
		else {
			index--;
		}
	}

	return index;
}


int binarySearch(int value, int array[], int size) {

	int lowerBound = 0;
	int upperBound = size - 1;
	int current = 0;
	bool success = false;

	while (!success && current >= 0)
	{
		current = lowerBound + ((upperBound - lowerBound) / 2);

		if (lowerBound > upperBound)
		{
			current = -1;
		}
		else if (array[current] == value)
		{
			success = true;
		}
		else
		{
			if (array[current] < value) {

				lowerBound = current + 1;
			}
			else {
				upperBound = current - 1;
			}
		}
	}
	return current;
}
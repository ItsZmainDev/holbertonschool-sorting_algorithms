#include "sort.h"
#include <stddef.h>

/**
* bubble_sort - Sort an array of integers using Bubble Sort
* @array: array of integers
* @size: number of elements in the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int swapped;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}

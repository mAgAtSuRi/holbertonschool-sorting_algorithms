#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array to check
 * size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_index;

	for (i = 0; i < size; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
					min_index = j;
		}

		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}

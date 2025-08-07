#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array to check
 * size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}

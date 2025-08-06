#include "sort.h"

/**
 * bublle_sort - sort int array with Bubble sort algorithm
 * -> go through array and swap 2 elements for every step
 * https://www.youtube.com/watch?v=lyZQPjUT5B4&t=306s
 *
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, is_changed = 0;

	if (size <= 1)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				is_changed = 1;
				print_array(array, size);
			}
		}
		if (is_changed == 0)
			break;
	}
}

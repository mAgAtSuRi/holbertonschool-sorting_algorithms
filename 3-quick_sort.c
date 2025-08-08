#include "sort.h"

/**
 * separate - separate pivot with left < values and right >
 * @array: array to separate
 * @low: starting index
 * @high: ending index
 * @size: original array size
 */
int separate(int *array, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	i = low - 1;
	pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
        	if (i != j)
        	{
				temp = array[i];
         		array[i] = array[j];
         		array[j] = temp;
         		print_array(array, size);
			}
		}
	}
    if (i + 1 != high)
    {
        temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        print_array(array, size);
    }

	return (i + 1);
}

/**
 * quick_sort_rec - recursive quick sort using Lomuto partition
 * @array: array to sort
 * @low: starting index
 * @high: ending index
 * @size: original array size
 */
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = separate(array, low, high, size);

		quick_sort_rec(array, low, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sort an int array using quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_rec(array, 0, size - 1, size);
}

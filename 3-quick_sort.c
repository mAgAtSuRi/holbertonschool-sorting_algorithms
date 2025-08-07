#include "sort.h"
int separate(int *array, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	i = low - 1;
	pivot = array[high];

	for (j = 0; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i + 1];
	array[i + 1] = pivot;
	array[size - 1] = temp;

	return (i + 1);
}
/**
 * quick_sort_rec - sort an int array using quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort_(int *array, size_t size)
{
	if (array == NULL)
		return;

	separate()
}

/**
 * quick_sort - sort an int array using quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{

}

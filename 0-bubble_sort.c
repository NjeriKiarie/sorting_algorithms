#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 *		in ascending order using the bubble sort algorthm
 * @array: An array of integers to be sorted.
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t c, k;
	int temp;

	for (c = 0; c < size; c++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

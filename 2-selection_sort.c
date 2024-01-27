#include "sort.h"


/**
 * selection_sort - This sorts an arrey of integers in asceding
 *			order using the selection sort alogarithm
 * @array: Arrays of integers.
 * @size: Size of the array.
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int *temp;

	temp = NULL;
	for (a = 0; array && a < size - 1; a++)
	{
		temp = NULL;
		for (b = a + 1; b < size; b++)
		{
			if (array[a] < array[b])
			{
				if (temp && array[b] < *temp)
					temp = &array[b];
				if (!temp)
					temp = &array[b];
			}
		}
		if (temp)
		{
			swap_int(temp, &array[a]);
			print_array(array, size);
		}
	}
}

/**
 * swap_int - swaps values of two integerds.
 * @c: takes the 1st int
 * @k: takes the secong intager
 */

void swap_int(int *c, int *k)
{
	int temp;

	temp = *c;
	*c = *k;
	*k = temp;
}

#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: the array to sort.
 * @size: the size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t tmp = 0;

	if (array == 0 || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	int sort1, sort2;
	size_t i, sort;

	if (array == NULL || size < 2)
		return;

	for (sort = 0; sort < size - 1; sort++)
	{
		sort2 = 0;


		for (i = 0; i < size - sort - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sort1 = array[i];
				array[i] = array[i + 1];
				array[i + 1] = sort1;
				sort2 = 1;
			}

		}

		if (sort2 == 0)
			break;


		print_array(array, size);
	}
}

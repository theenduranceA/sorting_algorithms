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
	int sort1 = 1, sort2;
	size_t i = 0;

	if (array == NULL || size < 2)
		return;

	while (sort1 != 0)
	{
		sort1 = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sort2 = array[i];
				array[i] = array[i + 1];
				array[i + 1] = sort2;
				sort1 = 1;
				print_array(array, size);
			}

		}
	}
}

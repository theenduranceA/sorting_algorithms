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
	int sort;
	size_t sort1, sort2;

	if (array == NULL || size < 2)
		return;

	while (size > 1)
	{
		sort1 = 0;
		sort2 = 1;

		while (sort2 < size)
		{
			if (array[sort1] > array[sort2])
			{
				sort = array[sort1];
				array[sort1] = array[sort2];
				array[sort2] = sort;
			}
			sort1++;
			sort2++;
		}

		size--;
		print_array(array, size);
	}
}

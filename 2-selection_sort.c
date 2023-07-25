#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers in
 * ascending order using the Selection sort algorithm.
 * @array: Array of integers to be sorted..
 * @size: Size of the array.
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		int *sort1 = array + i;

		for (j = i + 1; j < size; j++)
			sort1 = (array[j] < *sort1) ? (array + j) : sort1;

		if ((array + i) != sort1)
		{
			int sort2 = *sort1;
			*sort1 = array[i];
			array[i] = sort2;

			print_array(array, size);
		}
	}
}

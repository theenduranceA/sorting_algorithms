#include "sort.h"

/**
 * shell_sort - Function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence.
 * @array: Array of integers to be sorted.
 * @size: Size of the array
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t sort, i, j;
	int sort1, sort2;

	for (sort = 1; sort < size; sort = (sort * 3) + 1)
	;

	while (sort > 0)
	{
		sort2 = 0;
		for (i = sort; i < size; i++)
		{
			j = i;
			sort1 = array[i];
			while ((j >= sort) && (array[j - sort] > sort1))
			{
				array[j] = array[j - sort];
				j = j - sort;
			}
			array[j] = sort1;
			sort2 = 1;
		}
		if (sort2 == 1)
			print_array(array, size);
		sort = sort / 3;
	}
}

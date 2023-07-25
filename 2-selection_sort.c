#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list of
 * integers in ascending order.
 * @list: Double pointer to the head of the list. 
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

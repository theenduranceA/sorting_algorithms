#include "sort.h"

/**
 * partition - Partition function for implementing quick sort.
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 * @low: The lower integer.
 * @high: The higher integer.
 *
 * Return: The result value.
 */

size_t partition(int *array, int low, int high, size_t size)
{
	int aux, pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * qsort_helper - Helper function to implement quick sort
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 * @low: The lower integer.
 * @high: The higher integer.
 */

void qsort_helper(int *array, int low, int high, size_t size)
{
	int sort;

	if (low < high)
	{
		sort = partition(array, low, high, size);
		qsort_helper(array, low, sort - 1, size);
		qsort_helper(array, sort + 1, high, size);
	}
}

/**
 * quick_sort - Function that sorts an array of integers in
 * ascending order using the Quick sort algorithm.
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 */

void quick_sort(int *array, size_t size)
{
	qsort_helper(array, 0, size - 1, size);
}

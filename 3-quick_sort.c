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
	int aux;
	int pivot = array[high];
	int j;
	int i = low - 1;

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
 * quick_sort - Function that sorts an array of integers in
 * ascending order using the Quick sort algorithm.
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 */

void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);
}

/**
 * q_sort - Helper function to implement quick sort
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 * @low: The lower integer.
 * @high: The higher integer.
 */

void q_sort(int *array, int low, int high, size_t size)
{
	int sort;

	if (low < high)
	{
		sort = partition(array, low, high, size);
		q_sort(array, low, sort - 1, size);
		q_sort(array, sort + 1, high, size);
	}
}

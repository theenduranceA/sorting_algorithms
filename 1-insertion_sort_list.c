#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list of integers
 * in ascending order.
 * @list: A pointer to the head of the list.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sort1;
	listint_t *sort2;

	if (!list)
		return;

	sort1 = (*list)->next;

	while (sort1)
	{
		sort2 = sort1->prev;
		while (sort2 && sort2->n > sort1->n)
		{
			sort2->next = sort1->next;
			if (sort1->next)
				sort1->next->prev = sort2;
			sort1->prev = sort2->prev;
			if (sort2->prev)
				sort2->prev->next = sort1;
			else
				*list = sort1;
			sort2->prev = sort1;
			sort1->next = sort2;
			sort2 = sort1->prev;
			print_list(*list);
		}
		sort1 = sort1->next;
	}
}

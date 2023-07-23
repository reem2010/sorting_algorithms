#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp1, *tmp2;

	if (!list || !(*list) || !((*list)->next))
		return;
	tmp = *list;
	while (tmp)
	{
		tmp1 = tmp->next;
		while (tmp->prev)
		{
			if (tmp->n < (tmp->prev)->n)
			{
				tmp2 = tmp->prev;
				tmp2->next = tmp->next;
				if (tmp2->prev)
					(tmp2->prev)->next = tmp;
				if (tmp->next)
					(tmp->next)->prev = tmp2;
				tmp->prev = tmp2->prev;
				tmp2->prev = tmp;
				tmp->next = tmp2;
				if (!(tmp->prev))
					(*list) = tmp;
				print_list(*list);
			}
			else
				break;
		}
		tmp = tmp1;
	}
}

#include "sort.h"
/**
 * insertion_sort_list - insertion sort Function
 * @list: input
 * Return: None
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *f, *l, *new, *tmp;

	if (!list)
		return;

	l = (*list)->next;
	f = (*list);
	while (l)
	{
		new = l->next;
		while (f && l->n < f->n)
		{
			if (f->prev)
				f->prev->next = l;
			else
				*list = l;
			if (l->next)
				l->next->prev = f;
			tmp = l->next;
			l->next = f;
			l->prev = f->prev;
			f->next = tmp;
			f->prev = l;
			print_list(*list);
			f = l->prev;
		}
		l = new;
		if (l)
			f = l->prev;
	}
}

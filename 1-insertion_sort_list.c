#include "sort.h"
/**
 * 
 * 
 * 
 * 
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *lst;
	int key = 0;

	lst = *list;
	while (lst)
	{
		printf("%d  ", lst->n);
		lst = lst->next;
	}
}
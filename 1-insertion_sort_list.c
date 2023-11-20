#include "sort.h"
/**
 * del_node - Fuction to del node
 * @prev_node: node
 * @current_node: node
 * Return: node
*/
void swap_node(listint_t *prev_node,listint_t *cuurent_node)
{
	listint_t *tmp;
	tmp = prev_node;

	cuurent_node->next->prev = prev_node;

	prev_node->next = cuurent_node->next;
	prev_node->prev = cuurent_node;
	cuurent_node->next = prev_node;
	cuurent_node->prev = tmp->prev;
}

/**
 * lenght_size - return size og linked list
 * @list: input
 * Return: lenght of linked list
*/
size_t lenght_size(listint_t *list)
{
	size_t i = 0;

	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);	
}

/**
 * insertion_sort_list - insertion sort Function
 * @list: input
 * Return: None
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *lst;
	listint_t *current_node, *prev_node, *tmp;
	int step;
	size_t size;
	int key = 0;
	int j = 0;

	step = 1;
	lst = *list;
	size = lenght_size(lst);
	//printf("%zu\n", size);

	while(lst && step <= size)
	{
		current_node = lst;
		prev_node = lst->prev;
		//printf ("%d ", current_node->n);
		while (prev_node)
		{
			if (current_node->n < prev_node->n)
			{
				swap_node(prev_node, current_node);
				j++;
			}
			prev_node = prev_node->prev;
		}
		lst = lst->next;
		step++;
	}
}

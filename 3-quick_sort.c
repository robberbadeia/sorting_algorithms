#include "sort.h"
/**
 * swap_elements - Function
 * @f: input
 * @s: input
 * Return: None
*/
void swap_elements(int *f, int *s)
{
	int tmp = *f;
	*f = *s;
	*s = tmp;
}

/**
 * partition_function - Function
 * @array: input
 * @l: input
 * @h: input
 * Return: int
*/
int partition_function(int *array, int l, int h, size_t size)
{
	int p = array[h];
	int i = l - 1;
	int j;

	for (j = l; j <= h - 1; j++)
	{
		if (array[j] < p)
		{
			i++;
			swap_elements(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap_elements(&array[i + 1], &array[h]);
	return (i + 1);
}

/**
 * sort_quick - Function
 * @array: input
 * @l: input
 * @h:input
 * Return: None
*/
void sort_quick(int *array, int l, int h, size_t size)
{
	int p_index = 0;

	if (l < h)
	{
		p_index = partition_function(array, l, h, size);
		sort_quick(array, l, (p_index - 1), size);
		sort_quick(array, (p_index + 1), h, size);
	}
}

/**
 * quick_sort - Function
 * @array: input
 * @size: array size
 * Return: None
*/
void quick_sort(int *array, size_t size)
{
	int l = 0;
	int h = size - 1;

	sort_quick(array, l, h, size);
}

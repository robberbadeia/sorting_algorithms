#include "sort.h"
/**
 * partition_function - Function
 * @array: input
 * @l: input
 * @h: input
 * @size: input
 * Return: int
*/
int partition_function(int *array, int l, int h, size_t size)
{
	int tmp = 0;
	int p = array[h];
	int i = l;
	int j;

	for (j = l; j < h; j++)
	{
		if (array[j] < p)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[h];
	array[h] = tmp;
	if (array[i] != array[h])
		print_array(array, size);
	return (i);
}

/**
 * sort_quick - Function
 * @array: input
 * @l: input
 * @h:input
 * @size: input
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
	int h = (int)size - 1;

	if (!array || !size)
		return;

	sort_quick(array, l, h, size);
}

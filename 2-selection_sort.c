#include "sort.h"
/**
 * selection_sort - Function
 * @array: array of int
 * @size: int
 * Return: None
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int min_idx = 0;
	int tmp = 0;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		tmp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = tmp;
		print_array(array, size);
	}
}

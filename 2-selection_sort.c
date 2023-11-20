#include "sort.h"
/**
 * 
 * 
 * 
 * 
*/
void swap (int *min, int *b)
{
	printf("min:%ls, bigger:%ls", min, b);
}
/**
 * selection_sort - Function
 * @array: array of int
 * @size: int
 * Return: None
*/
void selection_sort(int *array, size_t size)
{
	int i = 0, j = 0, min_idx = 0;
	int tmp = 0;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		// swap function between index i and j
		tmp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = tmp;
		print_array(array, size);
	}
}
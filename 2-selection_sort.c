#include "sort.h"
/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: the array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t ind = 0, i, j;
	int min;

	if (size < 2)
		return;
	for (i = 0; i < size - 1 ;i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				ind = j;
			}
		}
		if (min != array[i])
		{
			array[ind] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}

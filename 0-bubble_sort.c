#include"sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, ind = size - 1, sorted = 1, tmp;


	while (ind > 0)
	{
		for (i = 0; i < ind; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				sorted = 0;
				print_array(array, size);
			}
		}
		ind--;
		if (sorted)
			break;
		sorted = 1;
	}
}

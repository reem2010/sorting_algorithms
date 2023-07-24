#include "sort.h"
/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick(array, 0, size - 1, size);
}
/**
 * quick - function to sort
 * @array: the array
 * @start: the start point
 * @end: end point
 * @size: size of the array
 */
void quick(int *array, size_t start, size_t end, size_t size)
{
	size_t p, i;
	int tmp, pivot;

	if (start == end)
		return;
	pivot = array[end];
	p = start - 1;
	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			p++;
			tmp = array[i];
			array[i] = array[p];
			array[p] = tmp;
			if (i != p)
				print_array(array, size);
		}
	}
	p++;
	if (p != end)
	{
		array[end] = array[p];
		array[p] = pivot;
		print_array(array, size);
	}
	if (p < end && p > start)
	{
		quick(array, start, p - 1, size);
		quick(array, p + 1, end, size);
	}
	else if (p == end)
		quick(array, start, p - 1, size);
	else if (p == start)
		quick(array, p + 1, end, size);
}

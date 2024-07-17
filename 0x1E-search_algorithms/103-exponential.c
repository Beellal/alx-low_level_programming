#include "search_algos.h"

int bin_search(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - exponetial search
 * @array: array
 * @size: size
 * @value: value
 * Return: the index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x;
	size_t r;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
		for (x = 1; array[x] < value && x < size; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	if (x < size)
		r = x;
	else
		r = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, r);

	index = bin_search(array, x / 2, r, value);

	return (index);
}

/**
 * bin_search - binary search with sorted array
 * @array: array
 * @left: left
 * @right: right
 * @value: searched value
 * Return: index if found
*/
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}

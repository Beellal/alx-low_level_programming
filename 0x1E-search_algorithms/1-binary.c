#include "search_algos.h"

/**
 * binary_search - binary search with sorted array
 * @array: array
 * @size: array size
 * @value: searched value
 * Return: index if found
*/
int binary_search(int *array, size_t size, int value)
{

	size_t index, l, r;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	r = size - 1;

	while (r >= l)
	{
		printf("Searching in array: ");
		for (index = l; index < r; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = l + (r - l) / 2;

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			r = index - 1;
		else
			l = index + 1;
	}

	return (-1);
}

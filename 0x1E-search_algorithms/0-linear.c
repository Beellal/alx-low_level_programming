#include "search_algos.h"

/**
 * linear_search - function to make linear serach
 * @array: array
 * @size: array size
 * @value: value searched
 * Return: 0 if fund
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}


	return (-1);
}

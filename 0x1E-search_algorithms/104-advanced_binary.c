#include "search_algos.h"

int recursive_search(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - advanced search
 * @array: array
 * @size: size
 * @value: value
 * Return: The index
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}

/**
 * recursive_search - recursive search
 * @array: array
 * @left: left
 * @right: right
 * @value: value
 * Return: index
*/
int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (right < left)
		return (-1);

	printf("Searching in array: ");

	for (index = left; index < right; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);

	index = left + (right - left) / 2;

	if (array[index] == value)
		if (array[index - 1] != value || index == left)
			return (index);

	if (array[index] >= value)
		return (recursive_search(array, left, index, value));

	return (recursive_search(array, index + 1, right, value));
}

#include "search_algos.h"

/**
 * jump_search - jump search
 * @array: array
 * @size: size
 * @value: value
 * Return: the index
*/
int jump_search(int *array, size_t size, int value)
{
	size_t index = 0;
	size_t jump = 0;
	size_t sqrt_size = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += sqrt_size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);

	if (jump > size - 1)
		jump = size - 1;

	while (index < jump && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index++;
	}

	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	if (array[index] == value)
		return ((int)index);

	return (-1);
}

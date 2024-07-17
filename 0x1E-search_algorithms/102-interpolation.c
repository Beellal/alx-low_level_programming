#include "search_algos.h"

/**
 * interpolation_search - interpolation search
 * @array: array
 * @size: size
 * @value: value
 * Return: The index
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, inter;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (right >= left)
	{
		inter = (((double)(right - left) / (array[right] - array[left])));
		inter = inter * (value - array[left]);

		index = left + inter;

		if (index > size)
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		if (array[index] < value)
			left = index + 1;
		else
			right = index - 1;
	}

	return (-1);
}

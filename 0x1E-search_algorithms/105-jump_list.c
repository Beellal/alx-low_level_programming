#include "search_algos.h"

/**
 * jump_list - jump list
 * @list: list
 * @size: size
 * @value: value
 * Return: node
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *target;
	size_t step = 0, stepSize = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);

	node = target = list;

	while (target->n < value && target->index + 1 < size)
	{
		node = target;
		for (step += stepSize; target->index < step; target = target->next)
		{
			if (target->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", target->index, target->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
			target->index);

	while (node->n < value && node->index < target->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);

	return (NULL);

}

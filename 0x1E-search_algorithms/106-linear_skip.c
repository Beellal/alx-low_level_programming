#include "search_algos.h"

/**
 * linear_skip - linear skip
 * @list: list
 * @value: value
 * Return: node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *target;

	if (list == NULL)
		return (NULL);

	node = target = list;

	while (target->n < value && target->next != NULL)
	{
		node = target;

		if (target->express != NULL)
		{
			target = target->express;
			printf("Value checked at index [%ld] = [%d]\n",
					target->index, target->n);
		}
		else
		{
			while (target->next != NULL)
				target = target->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, target->index);

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

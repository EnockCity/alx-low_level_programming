#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	size_t step = (size_t) sqrt(size);
	size_t index = 0;
	listint_t *prev = list;
	listint_t *current = list;

	/* Jumping forward in blocks of 'step' size */
	while (current->index < size && current->n < value)
	{
		prev = current;
		for (size_t i = 0; i < step && current->next; i++)
		{
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value || !current->next)
		{
			break;
		}
	}

	/* Linear search within the block */
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
	for (listint_t *node = prev; node <= current && node->index < size; node = node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
		{
			return (node);
		}
	}

	return (NULL);
}

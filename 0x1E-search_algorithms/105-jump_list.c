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

	size_t step = (size_t)sqrt(size);
	size_t prev_index = 0;
	listint_t *prev = list;

	/* Jumping forward in blocks of 'step' size */
	while (prev->index < size && prev->n < value)
	{
		listint_t *current = prev;

		/* Move to next block */
		for (size_t i = 0; i < step && current->next; i++)
		{
			current = current->next;
		}

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->index == size || current->n >= value)
		{
			break;
		}

		prev = current;
		prev_index = prev->index;
	}

	/* Linear search within the block */
	printf("Value found between indexes [%lu] and [%lu]\n", prev_index, prev->index);
	while (prev && prev->n <= value && prev->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
		prev = prev->next;
	}

	return (NULL);
}

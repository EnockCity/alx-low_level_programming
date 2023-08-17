#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_dlistint - prints elements of doubly linked list
  * @h: head pointer to the first node of the list
  * Return: numberr of nodes in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

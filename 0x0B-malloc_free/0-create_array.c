#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function that creates a char array
 *@size: size of the array
 *@c: character to be looked for
 * Return: NULL if size = 0
 * or return pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{

	if (size == 0)

	{

		return (NULL);
	}

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)

	{

		return (NULL);

	}

	for (unsigned int i = 0; i < size; ++i)

	{

		array[i] = c;

	}

	return (array);

}

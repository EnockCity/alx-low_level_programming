#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; ++i)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

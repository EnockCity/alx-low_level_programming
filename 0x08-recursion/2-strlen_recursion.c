#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: strring
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		++len;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

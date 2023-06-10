#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isupper -checks if a character is uppercase.
 * @c: char to be checked.
 * Return: 1 if the character is uppercase
 * Otherwise,return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}


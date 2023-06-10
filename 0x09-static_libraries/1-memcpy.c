#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - the function which copies memory area
 * @dest: memory area
 * @src: source
 * @n: number of bytes
 * Return: memory copied together with bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}

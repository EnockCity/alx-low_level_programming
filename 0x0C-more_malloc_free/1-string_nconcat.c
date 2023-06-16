#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that conctenates two strings
 * s1:string 1
 * s2:string 2
 * @n:number of characters to append to s1
 * Return:pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int a, b, i;

	if (s1 == NULL)
		a = 0;

	else
	{
		for (a = 0; s1[a]; a++)
			;
	}

	if (s2 == NULL)
		b = 0;

	else
	{
		for (b = 0; s2[b]; b++)
			;
	}

	if (b > n)
		b = n;

	str = malloc(sizeof(char) * (a + b + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		str[i] = s1[i];

	for (i = 0; i < b; i++)
		str[i + a] = s2[i];

	str[a + b] = '\0';
	return (str);

}

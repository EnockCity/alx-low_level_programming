#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *_strlen - function that returns length of a string
  *@s: the string
  *Return: length of str
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		++len;
	return (len);
}

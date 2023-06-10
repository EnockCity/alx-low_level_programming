#include  "main.h"
#include <string.h>
#include <stdio.h>

/**
  *_puts - print string followed by a new line
  *@str: paratmeter being checked
  *Return: string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

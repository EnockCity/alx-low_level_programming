#include "main.h"
#include <stdio.h>


/**
 * factorial - factorial of any given integer
 * @n: certain integer
 * Return: If n is less than 0,
 * the function should return -1 to indicate an error
 * Otherwise retur the fact
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	fact *= factorial(n - 1);

	return (fact);
}

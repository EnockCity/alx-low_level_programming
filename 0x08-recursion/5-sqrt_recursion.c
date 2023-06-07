#include "main.h"
#include <stdio.h>

int find_sqrt(int sqrt, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number we are finding the square root of
 * Return: the natural square root or
 * -1  for numbers with no square roots
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{

		return (-1);
	}
	else
	{

	return (find_sqrt(0, n));
	}

}


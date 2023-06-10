#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *_isdigit - checks for digits from 0-9
  *@c: int parameter being checked
  *Return: 1 if c is a digit within 0-9
  *Otherwise,return 0
  */

int _isdigit(int c)
{
	if  (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

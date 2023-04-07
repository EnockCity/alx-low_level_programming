#include <stdio.h>
#include "main.h"

/**
* set_bit - sets the value a bit at a given index to 1
* @n: pointer to the number to undergo change
* @index: index to set the value at – indexing starts at 0
*
* Return: 1 for success, -
* Otherwise return  -1  if an error occurs
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}


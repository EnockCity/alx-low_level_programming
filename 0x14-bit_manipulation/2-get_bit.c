#include <stdio.h>
#include "main.h"

/**
* get_bit - returns the value of a bit at an index in a decimal number
* @n: number to search
* @index: index to get value of the bit at - indexing starts at 0
*
* Return: value of the bit
* Otherwise-if an error occurs – return  -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}


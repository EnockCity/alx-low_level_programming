#include "main.h"

/**
*set_bit - fucntion that sets the value of a bit to 1
*@n: paramenter checked
*@index: index of the bit
*Return: 1 if it worked, or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | (1 << index);
return (1);
}

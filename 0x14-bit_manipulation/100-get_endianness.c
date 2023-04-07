#include <stdio.h>
#include "main.h"

/**
* get_endianness - checks the endianness
*That is, whether the machine is a little endian or big endian
* Return: 0 for big, 1 for little
*/

int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *) &k;

return (*c);
}


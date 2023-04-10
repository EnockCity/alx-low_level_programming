#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Reads a text file and prints it to a POSIX stdout.
* @filename: a pointer to the text file being read
* @letters: number of letters to be read and printed
* Return: s- actual number of bytes the function can read and print
*        0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t p;
ssize_t s;
ssize_t t;

p = open(filename, O_RDONLY);
if (p == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
t = read(p, buffer, letters);
s = write(STDOUT_FILENO, buffer, t);

free(buffer);
close(p);
return (s);
}


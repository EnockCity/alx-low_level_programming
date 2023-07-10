#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * read_textfile - function that reads a textfile and prints it to stdout.
 * @filename:text file to be read
 * @letters:number of letters to read
 * Return:number of letters the functionn can read/print, 0 - if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}

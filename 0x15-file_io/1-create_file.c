#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: string of chars inside the file
 * Return: 1 if SUccess, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

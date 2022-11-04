#include "main.h"

/**
 * create_file - create a file with permssion
 * @filename: A pointer to the name of the file
 * @text_content: the pointer to a string to write
 *
 * Return: range of values depending on fail or success
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

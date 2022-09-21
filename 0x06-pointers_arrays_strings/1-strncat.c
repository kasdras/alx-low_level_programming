#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to return
 * @src: string to append
 * @n: the number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (*(dest + j) != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + j] = src[i];
	dest[i + j] = '\0';

	return (dest);
}

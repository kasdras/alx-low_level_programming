#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to return
 * @src: string to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (*(dest + j) != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[i + j] = src[i];
	dest[i + j] = '\0';

	return (dest);
}

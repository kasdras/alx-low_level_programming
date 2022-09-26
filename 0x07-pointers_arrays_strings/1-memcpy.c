#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to receive copy
 * @src: memory to receive copy
 * @n: the bytes of the memory to fill
 * Return: the array filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src;
	return (dest);
}

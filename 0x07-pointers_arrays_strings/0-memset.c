#include "main.h"

/**
 * _memset - fills the n bytes of the memory area pointed
 * to bys with the constant byte b
 * @s: memory area pointed to by s
 * @b: constant byte to fill
 * @n: the bytes of the memory to fill
 * Return: the array filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s{i} = b;
	return (s);
}

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
	int i;
	char *p;

	p = s;
	for (i = 0; i < n; i++)
		p{i} = b;
	return (s);
}

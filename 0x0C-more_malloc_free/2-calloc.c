#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: bytes of each element
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, m;
	char *p;

	i = 0;
	m = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;
	p = malloc(m);

	if (p == NULL)
		return (NULL);

	while (i < m)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *maloc_checked - allocates memory using malloc
 * @b: the size
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b <= 0)
	{
		return (98);
	}
	p = malloc(b);
	if (p == NULL)
	{
		return (98);
	}
	return (p);
}

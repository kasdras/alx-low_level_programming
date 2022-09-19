#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to print
 * Return: s
 */

void rev_string(char *s)
{
	int i, p;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i -= 1;
	p = 0;
	while (i >= 0)
	{
		*(s + p) = *(s + i);
		p++;
	}
}

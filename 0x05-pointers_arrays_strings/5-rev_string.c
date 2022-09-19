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
	for (i -= 1; i >= 0; i--)
	{
		p = 0;
		while (p <= i)
		{
			*(s + p) = *(s + i);
			p++;
		}
	}
}

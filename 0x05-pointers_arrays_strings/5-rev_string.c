#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to print
 * Return: s
 */

void rev_string(char *s)
{
	int i, p, m;
	char *c, b;

	c = s;

	while (s[p] != '\0')
	{
		p++;
	}
	for (m = 1; m < p; m++)
		c++;
	for (i = 0; i < (p / 2); i++)
	{
		b = s[i];
		s[i] = *c;
		*c = b;
		c--;
	}
}

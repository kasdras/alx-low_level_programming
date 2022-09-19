#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to print
 * Return: s
 */

void rev_string(char *s)
{
	int i, p, g;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i -= 1;
	g = i;
	for (p = 0; p > g; p++)
	{
		s[p] = *(s + i);
		i -= 1;
	}
}

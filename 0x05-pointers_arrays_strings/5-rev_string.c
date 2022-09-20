#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to print
 * Return: s
 */

void rev_string(char *s)
{
	int i, p, m;
	char b;

	for (i = 0; s[i] != '\0'; i++)
		;
	p = 0;

	m = i / 2;

	while (m--)
	{
		b = s[i - p - 1];
		s[i - p - 1] = s[p];
		s[p] = b;
		p++;
	}
}

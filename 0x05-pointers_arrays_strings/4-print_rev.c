#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 * Return: s
 */

void print_rev(char *s)
{
	int i, c;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (c = i; (s[i] - 1) == *(s + 0); c--)
	{
		_putchar((s[i] - 1));
	}
	_putchar('\n');

}

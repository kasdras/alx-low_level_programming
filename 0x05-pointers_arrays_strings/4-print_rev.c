#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 * Return: s
 */

void print_rev(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		c += i;
	}
	while (i < 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');

}

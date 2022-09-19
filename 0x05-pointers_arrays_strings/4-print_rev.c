#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 * Return: s
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');

}

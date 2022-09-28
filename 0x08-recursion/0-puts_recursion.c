#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i;
	char p;

	i = 0;
	if (s[i])
	{
		_putchar(s[i]);
		i += 1;
		_puts_recursion(s);
	}
	_putchar('\n');
}

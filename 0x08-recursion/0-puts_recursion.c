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

	i = 0;
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		++i;
		_puts_recursion(s);
	}
	_putchar('\n');
}

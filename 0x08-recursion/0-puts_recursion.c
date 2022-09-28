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
	while (*(s + i) != '\0')
	{
		_putchar(_puts_recursion(*(s + i)) + '0');
		i++;
	}
	_putchar('\n');
}

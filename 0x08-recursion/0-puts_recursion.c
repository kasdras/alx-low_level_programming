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
	while (*(s + i) != '\0')
	{
		p = s[i];
		_putchar(_puts_recursion(p));
		i++;
	}
	_putchar('\n');
}

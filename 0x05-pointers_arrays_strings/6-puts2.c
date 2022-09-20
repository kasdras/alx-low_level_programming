#include "main.h"

/**
 * puts2 - a function that prints a string in reverse
 * @str: the string to print
 * Return: s
 */

void puts2(char *str)
{
	int i, p;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	i -= 1;
	p = 0;
	while (p <= i)
	{
		_putchar(*(str + p));
		p += 2;
	}
	_putchar('\n');
}

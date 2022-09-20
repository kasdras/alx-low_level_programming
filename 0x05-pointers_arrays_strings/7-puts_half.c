#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string to print
 * Return: s
 */

void puts_half(char *str)
{
	int i, m;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	i -= 1;
	if (i % 2 != 0)
	{
		_putchar(*(s + i));
	}
	else
	{
		m = i / 2;
		while (m  <= i)
		{
			_putchar(*(s + m));
			m++;
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string to print
 * Return: s
 */

void puts_half(char *str)
{
	int i, m, n;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		i -= 1;
		while (n <= i)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		m = i / 2;
		i -= 1;
		while (m  <= i)
		{
			_putchar(*(str + m));
			m++;
		}
	}
	_putchar('\n');
}

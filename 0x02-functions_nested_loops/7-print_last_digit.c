#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - checks for alphabetic character
 *
 * int: it is a sign
 * @p: it is a value
 *
 * Return: Always 0 Success
 */
int print_last_digit(int p)
{
	int m;

	if ((p < 0) || (p == print_last_digit(INT_MIN)))
	{
		m = -1;
		p = m * p;
		while (p > 10)
			p = p % 10;
	}
	return (_putchar(p));
	return (_putchar(p));
	_putchar('\n');
}

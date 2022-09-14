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
	while ((p > 10) || (p < 0))
	{
		p = p % 10;
		if (p < 0)
			p = (-1) * p;
	}
	_putchar(p);
	_putchar(p);
	return (print_last_digit(p));
}

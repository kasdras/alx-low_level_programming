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
	int m, n;

	m = p % 10;
	if (m < 0)
		m = -m;
	n = '0' + m;
	_putchar(n);
	return (m);
}

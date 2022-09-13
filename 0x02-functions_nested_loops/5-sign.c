#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks for alphabetic character
 *
 * int n: it is a sign
 * @n: it is a value
 *
 * Return: Always 0 Success
 */
int print_sign(int n)
{
	char p, m, z;

	if (n > 0)
	{
		p = '+';
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		z = '0';
		_putchar(z);
		return (0);
	}
	else if (n < 0)
	{
		m = '-';
		_putchar(m);
		return (-1);
	}
	return (1);
}

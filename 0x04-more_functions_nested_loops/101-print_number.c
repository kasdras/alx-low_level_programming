#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to return
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	x = 0;
	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
		x = n;
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}

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

	m = -1;
	n = p * m;
	if (n < 0)
		n = n * m;
	while (n > 10)
		n = n % 10;
	p = n;
	return (p);
}

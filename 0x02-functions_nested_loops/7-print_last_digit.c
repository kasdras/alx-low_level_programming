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

	m = -1;
	p = p * m;
	if (p < 0)
		p = p * m;
	while (p > 10)
		p = p % 10;
	return (p);
}

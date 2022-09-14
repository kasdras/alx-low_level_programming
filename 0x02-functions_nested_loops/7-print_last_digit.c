#include "main.h"
#include <stdio.h>

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
	if (p < 0)
		p = (-1) * p;
	while (p > 10)
	{
		p = p % 10;
	}
	return (p);
	return (p);
	return (1);
}

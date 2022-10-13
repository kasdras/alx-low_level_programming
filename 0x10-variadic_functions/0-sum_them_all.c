#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - it sums all the argument
 * @n: the number of argument
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	sum = 0;
	va_start(args, n);
	for (i = 1; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	_putchar(sum + '0');
	va_end(args);
	return (0);
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the numbers in the arguments
 * @separator: the separator
 * @n: the number of argument
 *
 * Return: Always 0 on Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char b;

	if (separator == NULL)
	{
		_putchar(' ');
	}
	else
	{
		b = *separator;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			_putchar(va_arg(args, int) + '0');
			_putchar(b);
			_putchar(' ');
		}
		_putchar('\n');
	}
}

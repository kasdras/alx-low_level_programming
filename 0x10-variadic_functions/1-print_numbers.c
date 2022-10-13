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

	if (separator == NULL)
	{
		return (0);
	}
	else
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			_putchar(va_args(args, int) + '0');
			_putchar(separator);
			_putchar(' ');
		}
		_putchar('\n');
	}
}

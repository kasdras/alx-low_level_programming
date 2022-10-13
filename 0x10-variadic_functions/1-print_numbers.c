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

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(args);
}

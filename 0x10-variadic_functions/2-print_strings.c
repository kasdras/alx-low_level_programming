#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator
 * @n: the number of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	if (n > 0)
	{
		va_start(args, n);

		i = 0;
		while (i < n)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s%", "(nil)");
			else
				printf("%s". str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}

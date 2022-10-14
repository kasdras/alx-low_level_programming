#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything passed to it
 * @format: the format to print
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int count = 0, j, i = 0;
	char *p;
	const char arguments[] = "cifs";

	va_start(args, format);
	while (format && format[count])
	{
		j = 0;
		while (arguments[j])
		{
			if (format[count] == arguments[j] && i)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(args, int)), i = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), i = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), i = 1;
				break;
			case 's':
				p = va_arg(args, char *), i = 1;
				if (!p)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
		} count++;
	}
	printf("\n"), va_end(args);
}

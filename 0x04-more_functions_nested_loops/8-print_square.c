#include "main.h"

/**
 * print_square - draws a straight line in the terminal
 * @size: the number of times the character # should be printed
 * Return: prints # n times
 */

void print_square(int size)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= n; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_square - draws a straight line in the terminal
 * @size: the number of times the character # should be printed
 * Return: prints # n times
 */

void print_square(int size)
{
	int i, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, m;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (m = 1; m <= size; m++)
		{
			if (m <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

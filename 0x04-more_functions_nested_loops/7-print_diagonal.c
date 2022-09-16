#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character should be printed
 * Return: prints n times
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * of integers
 * @a: the integer to print
 * @n: the number of element
 * Return: a
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n)
		{
			printf("%d", a[i]);
			_putchar(',');
		}
		if (i != n - 1)
			_putchar(' ');
		i++;
	}
	_putchar('\n');
}

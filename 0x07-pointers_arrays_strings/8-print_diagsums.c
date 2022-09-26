#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum_one, sum_two;

	sum_one = 0;
	sum_two = 0;

	for (i = 0; i < size; i++)
	{
		sum_one += a[(size + 1) * i];
		sum_two += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum_one, sum_two);
}

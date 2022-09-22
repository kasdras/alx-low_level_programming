#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	n -= 1;
	while (n >= 0)
	{
		a[i] = a[n];
		n--;
		i++;
	}
}

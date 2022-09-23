#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i, h;

	i = 0;
	n -= 1;
	while (i < n)
	{
		h = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = h;
		i++;
		n--;
	}
}

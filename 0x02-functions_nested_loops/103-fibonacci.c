#include "main.h"
/**
 * main - finds and prints the sum of the even
 * valued terms ina fibonnaci sequence
 *
 * Return: void
 */
int main(void)
{
	unsigned long i, m, n, p, q;

	m = q = 0;
	n = 1;
	for (i = 0; i < 50; i++)
	{
		p = m + n;
		m = n;
		n = p;
		if (p % 2 == 0 && p < 4000000)
			q += p;
	}
	printf("%lu\n", q);
	return (0);
}

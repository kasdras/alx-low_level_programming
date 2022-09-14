#include "main.h"
/**
 * Main - print the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	unsigned long i, m, n, p;

	m = 0;
	n = 1;
	for (i = 0; i < 50; i++)
	{
		p = m + n;
		m = n;
		n = p;
		printf("%lu", p);
		if (i == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}

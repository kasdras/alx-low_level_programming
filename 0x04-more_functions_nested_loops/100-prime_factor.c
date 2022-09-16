#include <stdio.h>

/**
 * main - print prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long int n, p;

	n = 612852475143;
	for (p = 2; p < n; p++)
	{
		if (n % p == 0)
			n = n / p;
	}
	printf("%ld\n", p);
	return (0);
}

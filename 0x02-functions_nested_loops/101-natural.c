#include <stdio.h>
/**
 * main - compute and prints the sum of all the multiples
 * 3 or 5 below 1024
 * Return: void
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 1024; m++)
		if (m % 3 == 0 || m % 5 == 0)
			n += m;
	printf("%d\n", n);
	return (0);
}

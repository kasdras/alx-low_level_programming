#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print positive and negative numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;
	char m;

	for (alp = 0; alp <= 9; ++alp)
	{
		printf("%d", alp);
	}

	m = '\n';
	putchar(m);

	return (0);
}

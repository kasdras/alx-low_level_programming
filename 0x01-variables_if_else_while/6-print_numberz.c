#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print positive and negative numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp, m;

	for (alp = 0; alp <= 9; ++alp)
	{
		putchar(alp + '0');
	}

	m = '\n';
	putchar((char)m);

	return (0);
}

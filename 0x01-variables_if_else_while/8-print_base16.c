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
	char m, n;

	for (alp = 0; alp <= 9; ++alp)
		putchar(alp + '0');
	
	for (n = 'a'; n <= 'f'; ++n)
		putchar(n);

	m = '\n';
	putchar(m);

	return (0);
}

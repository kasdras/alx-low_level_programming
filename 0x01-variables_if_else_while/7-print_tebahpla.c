#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print positive and negative numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp, m;

	for (alp = 'z'; alp >= 'a'; --alp)
	{
			putchar(alp);
	}

	m = '\n';
	putchar(m);

	return (0);
}

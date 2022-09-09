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

	for (alp = 'a'; alp <= 'z'; ++alp)
	{
		if ((alp == 'q') || (alp == 'e'))
			continue;
		else
			putchar(alp);
	}

	m = '\n';
	putchar(m);

	return (0);
}

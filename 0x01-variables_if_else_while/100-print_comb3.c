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

	for (alp = '0'; alp <= '9'; ++alp)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (alp < m)
			{
				putchar(alp);
				putchar(m);
				if ((alp != '8') || (alp == '8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print positive and negative numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp, m, n;

	for (alp = '0'; alp <= '9'; ++alp)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if ((alp < n && alp < m) && (m < n))
				{
					putchar(alp);
					putchar(m);
					putchar(n);
					if (alp == '7' && n == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

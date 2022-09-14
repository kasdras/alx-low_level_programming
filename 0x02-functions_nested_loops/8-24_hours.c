#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * jack_bauer - prints every minute of the day
 *
 *
 * Return: Always 0 Success
 */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m <= 2; ++m)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(o);
					_putchar(p);
					_putchar('\n');
				}
			}
			if ((m == 2) && (n == 4))
				break;
		}
	}
}

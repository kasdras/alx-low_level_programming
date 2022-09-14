#include "main.h"

/**
 * times_table -prints the times table from 0 to 9.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int m, n, p;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			p = (m * n);
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p < 10 && n != 0)
			{
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
			else
				_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}

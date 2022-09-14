#include "main.h"
/**
 * print_times_table - prints the times table for n.
 *
 * @n: The number requested for multiplication table
 * Return: void
 */
void print_times_table(int n)
{
	int m, g, p;

	if (!(n > 15 || n < 0))
	{
		for (m = 0; m <= n; m++)
		{
			for (g = 0; g <= n; g++)
			{
				p = (m * g);
				if (g != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (p < 10 && g != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100 && g != 0)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar((p % 10) + '0');
				}
				else
					_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

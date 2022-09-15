#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: 0 - 14, 10 times
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
			_putchar(k + '0');
		_putchar('\n');
	}
}

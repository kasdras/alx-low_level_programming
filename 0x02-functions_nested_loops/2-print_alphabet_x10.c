#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - calls the putchar ()
 * print_alphabet - prints the alphabets a - z
 *
 * Return: Always 0 Success
 */
void print_alphabet(void)
{
	char i, m;

	for (m = '0'; m <= '9'; ++m)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

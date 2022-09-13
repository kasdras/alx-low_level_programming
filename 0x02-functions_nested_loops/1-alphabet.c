#include "main.h"
#include <stdio.h>

/**
 * main - calls the putchar ()
 * print_alphabet - prints the alphabets a - z
 *
 * Return: Always 0 Success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
		_putchar('\n');
	}
}

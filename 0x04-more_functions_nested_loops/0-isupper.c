#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 * Return: 1 for uppercase and 0 for otherwise
 */

int _isupper(int c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		_putchar(i + '0');
	else
	{
		i = 1;
		_putchar(i + '0');
	}
	return (i);
}

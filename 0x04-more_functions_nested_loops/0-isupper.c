#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 * Return: 1 for uppercase and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

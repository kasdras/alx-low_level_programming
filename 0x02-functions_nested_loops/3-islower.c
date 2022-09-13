#include "main.h"
#include <stdio.h>

/**
 * _islower - returns ASCII value
 *
 * int c: it is a lowercase or uppercase
 * @c: it is a value
 *
 * Return: Always 0 Success
 */
int _islower(int c) /* c - is a value*/
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
}

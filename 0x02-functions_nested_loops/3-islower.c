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
	int p;
	p = c;

	if (p >= 'a' && p <= 'z')
		return (1);
	else if (p >= 'A' && p <= 'Z')
		return (0);
	return (1);
}

#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for alphabetic character
 *
 * int: it is a sign
 * @p: it is a value
 *
 * Return: Always 0 Success
 */
int _abs(int p)
{
	if (p < 0)
		return (p * (-1));
	else if (p >= 0)
		return ((1) * p);
	return (1);
}

#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * int c: it is a lowercase or uppercase
 * @c: it is a value
 *
 * Return: Always 0 Success
 */
int _isalpha(int c) /* c - is a value*/
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (1);
}

#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to convert
 * Return: s
 */

int _atoi(char *s)
{
	int i, m, n, o;

	i = n = 0;
	o = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			o *= -1;
		i++;
	}
	m = 1;
	while ((*(s + m) >= '0') && (*(s + m) <= '9'))
	{
		n = n * 10 + o * (*(s + m) - '0');
		m++;
	}
	return (n);
}

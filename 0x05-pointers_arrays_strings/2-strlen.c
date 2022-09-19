#include "main.h"

/**
 * _strlen - a function that swaps the values of two intgers
 * @s: the string length to return
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; *(s + i) == '\0'; i++)
	{
		c += i;
	}
	return (c);

}

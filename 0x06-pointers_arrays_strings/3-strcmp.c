#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: <-15, 0, >15
 */

char _strcmp(char *s1, char *s2)
{
	int i, j, c;

	i = 0;
	j = 0;
	while (*(s1 + j) != '\0')
	{
		j++;
	}
	while (s2[i] != '\0')
		i++;
	if (j > i)
		c = 15;
	else if (j < i)
		c = -15;
	else
		c = 0;
	return (c);
}

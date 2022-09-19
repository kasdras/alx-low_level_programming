#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to print
 * Return: s
 */

void rev_string(char *s)
{
	int i;
	char p;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i -= 1;
	while (i >= 0)
	{
		p += *(s + i);
		i--;
	}
	return (p);

}

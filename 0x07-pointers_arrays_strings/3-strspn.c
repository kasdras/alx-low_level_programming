#include "main.h"

/**
 * _strspn - function that gets the length of a
 * prefix substring
 * @s: string
 * @accept: the substring
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, m = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				m++;
			}
			j++;
		}
		i++;
	}

	return (m);
}

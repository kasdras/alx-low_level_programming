#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accepted[j])
		{
			if (s[i] == accept[j])
			{
				s += a;
				return (s);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}

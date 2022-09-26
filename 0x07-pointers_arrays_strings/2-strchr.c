#include "main.h"

/**
 * _strchr - function that locates a character ina string
 * @s: string to search
 * @c: character to locate
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}

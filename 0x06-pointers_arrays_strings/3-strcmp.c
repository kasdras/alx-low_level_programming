#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: <-15, 0, >15
 */

char _strcmp(char *s1, char *s2)
{
	int i, j, g, l, e;

	i = 0;
	j = 0;
	for (i = 0; s1[i] == '\0'; i++)
	{
		for (j = 0; s2[j] == '\0'; j++)
		{
			if (s1[i] > s2[j])
			{
				g++;
			}
			else if (s1[i] < s2[j])
				l--;
			else
				e = 0;
		}
	}
	if (g > 0)
		return (15);
	else if (l < 0)
		return (-15);
	else
		return (e);
}

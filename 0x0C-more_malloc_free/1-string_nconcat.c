#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string that accept second string
 * @s2: second string
 * @n: the length of second string
 *
 * Return: the pointer with new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n >= k)
		m = i + k;
	else
		m = i + n;

	p = malloc(sizeof(char) * m + 1);
	if (p == NULL)
		return (NULL);

	k = 0;
	while (j < m)
	{
		if (j <= i)
			p[j] = s1[j];
		if (j >= i)
		{
			p[j] = s2[k];
			k++;
		}
		j++;
	}
	p[j] = '\0';
	return (p);
}

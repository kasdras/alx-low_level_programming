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

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		m = i + j;
	else
		m = i + n;

	p = malloc(sizeof(char) * m + 1);
	if (p == NULL)
		return (NULL);

	j = 0;
	while (k < m)
	{
		if (k <= i)
			p[k] = s1[k];
		if (k >= i)
		{
			p[k] = s2[j];
			j++;
		}
	}
	p[k] = '\0';
	return (p);
}

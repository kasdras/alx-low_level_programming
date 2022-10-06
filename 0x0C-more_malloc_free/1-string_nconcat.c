#include "main.h"

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
	int i, j, k;
	char *p;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		p = malloc((i + j) * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	else
	{
		p = malloc((i + n) * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (m = 0; m < n && s2[m] != '\0'; m++)
	{
		p[k + m] = s2[m];
	}
	return (p);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = c[j];
		}
	}
	return (s);
}

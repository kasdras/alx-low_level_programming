#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: the string to change
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i, j;
	
	char a[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}

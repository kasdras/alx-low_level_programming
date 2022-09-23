#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @s: the string to change
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: <-15, 0, >15
 */

char _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	i = (*s1 == *s2)? 0: (*s1 > *s2)? 15: -15;
	return i;
}

#include "main.h"

/**
 * palind_1 - get the length of i
 * @i: the string
 * @j: the count
 *
 * Return: 1
 */
int palind_1(char *i, int j)
{
	if (*i == 0)
		return (j - 1);
	return (palind_1(i + 1, j + 1));
}
/**
 * palind_2 - compares string vs string reverse
 * @i: the string
 * @j: length
 * Return: 1 if successful
 */
int palind_2(char *i, int j)
{
	if (*i != *(i + j))
		return (0);
	else if (*i == 0)
		return (1);
	return (palind_2(i + 1, j - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: 1 if successful
 */
int is_palindrome(char *s)
{
	int j;

	j = palind_1(s, 0);
	return (palind_2(s, j));
}

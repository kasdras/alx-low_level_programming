#include "main.h"

/**
 * _strlen - a function that swaps the values of two intgers
 * @s: the string length to return
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);

}

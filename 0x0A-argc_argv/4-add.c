#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of command line argument
 * @argv: the array of command line argument
 * Return: O Always
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			j += atoi(argv[i]);
		}
	}
	printf("%d\n", j);
	return (0);
}

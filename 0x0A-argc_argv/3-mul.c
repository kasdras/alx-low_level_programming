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

	if (argc < 3)
		printf("Error\n");
	else
	{
		i = 1;
		j = 2;
		printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	}
	return (0);
}

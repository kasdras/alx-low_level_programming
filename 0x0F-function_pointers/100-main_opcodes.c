#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: the length of argv
 * @argv: the array of arguments
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}

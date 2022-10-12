#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: the count
 * @argv: the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[i]), atoi(argv[3])));
	return (0);
}

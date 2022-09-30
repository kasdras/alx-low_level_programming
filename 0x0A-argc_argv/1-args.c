#include "main.h"
#include <stdio.h>
#define UNUSED(argv) (void) argv

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of command line argument
 * @argv: the array of command line argument
 * Return: O Always
 */
int main(int argc, char *argv[])
{
	UNUSED(*argv);
	printf("%d\n", argc - 1);
	return (0);
}

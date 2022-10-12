#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elm - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	return (0);
}

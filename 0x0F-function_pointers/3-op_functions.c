#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract twon integers
 * @a: first int
 * @b: second int
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two int
 * @a: first int
 * @b: second int
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two int
 * @a: first int
 * @b: second int
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder
 * @a: the first int
 * @b: second int
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

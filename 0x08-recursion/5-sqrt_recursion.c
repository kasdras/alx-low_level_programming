#include "main.h"

/**
 * _sqrt_check - evaluate from 1 to n
 * @i: the number n
 * @j: the count
 *
 * Return: the number (square root)
 */
int _sqrt_check(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (i * i > j)
		return (-1);
	return (_sqrt_check(i, j + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1));
}

#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root
 * of a number
 * @n: the number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = n / _sqrt_recursion(n - 1);
	if (n % sqrt == sqrt * sqrt)
		return (sqrt);
	else
		return (-1);
}

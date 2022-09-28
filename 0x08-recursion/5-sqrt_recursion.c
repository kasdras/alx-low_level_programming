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
	int sqrt, rn;

	if (n < 0)
		return (-1);
	rn = n;
	sqrt = n / _sqrt_recursion(n - 1);
	if (rn / sqrt == sqrt * sqrt)
		return (sqrt);
	else
		return (-1);
}

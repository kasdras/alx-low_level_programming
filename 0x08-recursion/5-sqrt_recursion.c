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
	int p;

	p = n;
	return (n / _sqrt_recursion(n - 1));
	if (p % n == n * n)
		return (n);
	else if (p % n != n * n)
		return (-1);
}

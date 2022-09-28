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
	if (n % n != n * n)
		return (n / _sqrt_recursion(n - 1));
	else
		return (-1);
}

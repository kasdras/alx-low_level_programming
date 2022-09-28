#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to y
 * @x: the base value
 * @y: the power
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: the integer to check
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 0 || n == 1)
		return (0);
	else
		return (1);
	return (n / is_prime_number(n - 1));
}

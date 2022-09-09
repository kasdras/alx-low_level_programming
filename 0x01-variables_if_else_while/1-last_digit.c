#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print positive and negative numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_dgt, dgt;

	srand(time(0));
	dgt = n = rand() - RAND_MAX / 2;
	while ((dgt >= 10) || (dgt < 0))
	{
		dgt = dgt % 10;
		if ((dgt - 5) != 0)
			break;
	}
	l_dgt = dgt;
	if (l_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_dgt);
	else if (l_dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_dgt);
	else if ((l_dgt < 6) || (l_dgt < 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dgt);

	return (0);
}

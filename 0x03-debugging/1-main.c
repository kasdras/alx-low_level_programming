#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: Always 0 Success
 */
int main(void)
{
	int m;

	printf("Infinite loop incoming:(\n");

	m = 0;
/*
 * 	while (m < 10)
 * 	{
 * 		putchar(m);
 * 	}
 */
	printf("Infinite loop avoided! \\0/\n");

	return (0);
}

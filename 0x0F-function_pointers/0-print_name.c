#include "main.h"

/**
 * print_name - It calls a function
 * @name: the name string
 * @f: the function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

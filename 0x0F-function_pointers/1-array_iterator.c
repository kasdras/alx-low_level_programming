#include "function_pointers.h"

/**
 * array_iterator - it execute on each element of array
 * @array: the array with size
 * @size: the size of the array
 * @action: the pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

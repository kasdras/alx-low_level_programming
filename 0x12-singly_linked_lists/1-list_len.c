#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show the number of elements
 * @h: the linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}

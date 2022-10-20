#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: the original linked list
 * @str: the string to add
 *
 * Return: the address of the new list or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: string lenght
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

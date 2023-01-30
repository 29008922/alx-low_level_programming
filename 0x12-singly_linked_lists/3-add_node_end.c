#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to list_t struct.
 * @str: name of str member in the struct.
 * Return: Address to the new elelemt.
 *Otherwise, return NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	s = strdup(str);
	len = strlen(str);
	new->str = s;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
